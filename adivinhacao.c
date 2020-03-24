#include <stdio.h>

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

            printf("\nVoce acertou, parabens!\n");
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

    printf("\nVoce acertou o jogo em %d tentativas\n\n", lives);
    
    return 0;
}