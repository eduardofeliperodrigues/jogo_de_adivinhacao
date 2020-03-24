#include <stdio.h>

#define TENTATIVAS 4

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
        
    while (lives < TENTATIVAS){
        
        printf("\n\n***************************************\n");
        
        //Imprime a vida atual
        printf("\n\nTentativa %d\n", lives);
        
        // Pede para o usuario digitar o seu chute;
        printf("\nQual eh o seu chute? ");
        scanf("%d", &chute);
        printf("\nSeu chute foi %d\n", chute);
        
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
    printf("\n\n***** Suas vidas acabaram *****");   
    return 0;
}