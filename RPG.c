#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define Texto "Return to castle Wolfstein"
#define Missao1 "Fugir da cela"

#include <time.h>

void delay(int segundos){
    time_t inicio = time(NULL);
    while(time(NULL) - inicio < segundos);
}

int main(){
	//Variáveis
	int personagem; //Escolha do personagem ln.25
	char NomePersonagem[50]; //Nome do personagem ln.38 até ln.44
	int opcao;
	char Mochila[100] = "";
	int missoes;
	
	//Set da linguagem
	SetConsoleTitle("RPG - Return to Castle Wolfstein");
    setlocale(LC_ALL, "Portuguese");
    
	//Começo do Programa    
    printf("------------------------\n");
    printf("%s\n", Texto);
    printf("------------------------\n");
    
    printf("Escolha seu personagem\n");
    printf("1.Frank Maxwell\n2.Millard Harmon\n3.Herbert Dargue\n");
    scanf("%d", &personagem);
    
   	switch(personagem){
   		case 1:
   			strcpy(NomePersonagem, "Frank Maxwell");
   			break;
   		case 2:
   			strcpy(NomePersonagem, "Millard Harmon");
   			break;
   		case 3:
   			strcpy(NomePersonagem, "Herbert Dargue");
   			break;
   		default:
   			printf("Você é burro?");
   			break;
	}
		
		system("cls");
		
		//A primeira missão
		
		printf("-------------------------------------------------------\n");
		printf("Você foi capturado e está preso no Castelo Wolfenstein.\n");
	    printf("Sua primeira missão é %s\n", Missao1);
	    printf("-------------------------------------------------------\n");
	    puts("");
	    printf("Depois de acordar você olha ao redor e acha um punhal oq você faz?\n");
	    printf("(1)Pega\n(2)Deixa no chão\n");
	    scanf("%d", &opcao);
	    if(opcao == 1){
	    	printf("Você pega a punhal\n");
	    	strcpy(Mochila, "Punhal");
		}
		if(opcao==2){
			printf("Você deixa o punhal no chão\n");
		}
	printf("\nVocê percebe que sua cela está sem supervisão e está destrancada");
	printf("\nO que você faz?\n");
	printf("\n(1)Foge\n(2)Fica\n");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
			printf("Você fugiu da cela\n");
			break;
		case 2:
			printf("Te pegaram, torturam e te mataram fuzilado\n");
			system("pause");
			exit(0);

		default:
			printf("Te pegaram, torturam e te mataram fuzilado\n");
			system("pause");
			exit(0);
	}
	printf("\nVocê encontra uma escada e sobe, logo acima tem um porta\n");
	printf("O que você faz?\n");
	printf("\n(1)Abre com cuidado para não ser descoberto\n(2)Chuta a porta e faz muito barulho\n");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
			printf("Você consegue entrar na sala, sem ser descoberto\n");
			break;
		case 2:
			printf("O soldado que estava lá dentro ouve e te pega e te mata ali mesmo");
			system("pause");
			exit(0);
		default:
			printf("O soldado que estava lá dentro ouve e te pega e te mata ali mesmo");
			system("pause");
			exit(0);
	}
	
	printf("Você entrou o que você faz?\n");
	printf("\n(1)Vai de fininho e chega perto do guarda\n");
	printf("(2)Vai fazendo muito barulho e chega perto do guarda\n");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
			printf("Você consegue chegar perto do guarda");
			break;
		case 2:
			printf("O soldado que estava lá, ouve e te pega e te mata ali mesmo");
			system("pause");
			exit(0);
		default:
			printf("O soldado que estava lá dentro ouve e te pega e te mata ali mesmo");
			system("pause");
			exit(0);
	}
	printf("Você está do lado do guarda o que você faz?\n");
	printf("\n(1)Mata ele na punhalada na barriga\n");
	printf("(2)Tenta acertar na cabeça dele\n");
	printf("(3)Tenta matar ele no soco\n");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
			printf("Você mata ele e consegue as chaves para sair daquela sala\n");
			break;
		case 2:
			printf("Você tenta acertar o soldado na cabeça só que ele te percebe e mata a tiros\n");
			system("pause");
			break;
		case 3:
			printf("Você mata o soldado no soco e consegue as chaves para sair daquela sala\n");
			break;
			
		default:
			printf("O soldado te percebe e mata a tiros");
			system("pause");
			break;
	}
	printf("\nVocê conseguiu as chaves e saiu da sala\n");
	printf("Parabens %s. Você terminou a %d missão", NomePersonagem, missoes+1);
	missoes++;
}
