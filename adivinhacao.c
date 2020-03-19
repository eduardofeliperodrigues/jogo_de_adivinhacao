#include <stdio.h>

int main()
{
    //Imprime o cabeçalho do jogo
    printf("***************************************\n");
    printf("* Bem vindo ao programa de advinhacao *\n");
    printf("***************************************\n");
    
    int random_number = 42;
    
    int chute;
    
    // Pede para o usuario digitar o seu chute;
    printf("Qual eh o seu chute? ");
    scanf("%d", &chute);
    printf("\nSeu chute foi %d\n", chute);
    
    
    
    return 0;
}