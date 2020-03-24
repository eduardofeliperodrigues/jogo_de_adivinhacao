#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Imprime o cabeçalho do jogo
    printf("***************************************\n");
    printf("* Bem vindo ao programa de advinhacao *\n");
    printf("***************************************\n");
    
    //Geração do numero aleatório
    int random_number = 42;
    
    //Valor do chute
    int chute;
        
    // Numero de vidas
    int lives = 1;
    
    // Valor da pontuação inicial de cada jogador;
    int pontos = 1000;
    
    int pontos_perdidos;
        
    while(1){
        
        printf("\n\n***************************************\n");
        
        //Imprime a vida atual
        printf("\n\nTentativa numero %d\n", lives);
        
        // Pede para o usuario digitar o seu chute;
        printf("\nQual eh o seu chute? ");
        scanf("%d", &chute);
        printf("\nSeu chute foi %d\n", chute);
        
        while (chute < 0){
            // Pede para o usuario digitar o seu chute;
            printf("\nVoce digitou um valor menor que 0, digite novamente: ");
            scanf("%d", &chute);
            printf("\nSeu chute foi %d\n", chute);
        }
        
        // Comparação do chute com o numero aleatório
        
        int acertou = (chute == random_number);
        int maior = chute > random_number;

        if (acertou){
            system("cls");
            printf("*****************************************\n");
            printf("\n*       Voce acertou, parabens!         *\n");
            printf("\n*  Voce acertou o jogo em %d tentativas  *\n", lives);
            printf("\n*   Sua pontuacao final eh %d pontos!  *\n\n", pontos);
            printf("*****************************************\n");
            break;
        }
        else if (maior){
            printf("\nSeu chute foi maior que o numero secreto.\n");
            pontos_perdidos = (chute - random_number)/2;
        }
        else {
            printf("\nSeu chute foi menor que o numero secreto.\n");
            pontos_perdidos = (random_number - chute)/2;
        }
        
        lives ++;
        
        pontos = pontos - pontos_perdidos;
    }
    
    return 0;
    
}