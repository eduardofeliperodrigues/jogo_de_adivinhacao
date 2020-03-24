#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Imprime o cabeçalho do jogo
    printf("***************************************\n");
    printf("* Bem vindo ao programa de advinhacao *\n");
    printf("***************************************\n");
    
    //Geração do numero aleatório
    float random_number = 42;
    
    //Valor do chute
    float chute;
        
    // Numero de vidas
    float lives = 1;
        
    while(1){
        
        printf("\n\n***************************************\n");
        
        //Imprime a vida atual
        printf("\n\nTentativa numero %4.0f\n", lives);
        
        // Pede para o usuario digitar o seu chute;
        printf("\nQual eh o seu chute? ");
        scanf("%f", &chute);
        printf("\nSeu chute foi %.0f\n", chute);
        
        while (chute < 0){
            // Pede para o usuario digitar o seu chute;
            printf("\nVoce digitou um valor menor que 0, digite novamente: ");
            scanf("%f", &chute);
            printf("\nSeu chute foi %.0f\n", chute);
        }
        
        // Comparação do chute com o numero aleatório
        
        int acertou = (chute == random_number);
        int maior = chute > random_number;

        if (acertou){
            system("cls");
            printf("********************************************\n");
            printf("\n*         Voce acertou, parabens!          *\n");
            printf("\n*  Voce acertou o jogo em %4.0f tentativas  *\n", lives);
            printf("\n********************************************\n");
            break;
        }
        else if (maior){
            printf("\nSeu chute foi maior que o numero secreto.\n");
        }
        else {
            printf("\nSeu chute foi menor que o numero secreto.\n");
        }
        
        lives ++;
    }
    
    return 0;
    
}