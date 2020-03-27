#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Imprime o cabeçalho do jogo
    

    printf("    .     .       .  .   . .   .   . .    +  .                   \n");
    printf("  .     .  :     .    .. :. .___---------___.                    \n");
    printf("       .  .   .    .  :.:. _ . .   .  '.. :  -_. .               \n");
    printf("    .  :       .  .  .:../:            . .   :.:\\.              \n");
    printf("        .   . :: +. :.:/: .   .    .        . . .:\\             \n");
    printf(" .  :    .     . _ :::/:               .  ^ .  . .:\\            \n");
    printf("  .. . .   . - : :.:./.                        .  .:\\           \n");
    printf("  .      .     . :..|:                    .  .  ^. .:|           \n");
    printf("    .       . : : ..||        .                . . !:|           \n");
    printf("  .     . . . ::. ::\\(                           . :)/          \n");
    printf(" .   .     : . : .:.|. ######              .#######::|           \n");
    printf("  :.. .  :-  : .:  ::|.#######           ..########:|            \n");
    printf(" .  .  .  ..  .  .. :\\ ########          :######## :/           \n");
    printf("  .        .+ :: : -.:\\ ########       . ########.:/            \n");
    printf("    .  .+   . . . . :.:\\. #######       #######..:/             \n");
    printf("      :: . . . . ::.:..:.\\           .   .   ..:/               \n");
    printf("   .   .   .  .. :  -::::.\\.       | |     . .:/                \n");
    printf("      .  :  .  .  .-:.:.::.\\             ..:/                   \n");
    printf(" .      -.   . . . .: .:::.:.\\.           .:/                   \n");
    printf(".   .   .  :      : ....::_:..:\\   ___.  :/                     \n");
    printf("   .   .  .   .:. .. .  .: :.:.:\\       :/                      \n");
    printf("     +   .   .   : . ::. :.:. .:.|\\  .:/|                       \n");
    printf("     .         +   .  .  ...:: ..|  --.:|                        \n");
    printf(".      . . .   .  .  . ... :..:../...... \\                      \n");
    printf(" .   .       .      :  .   .: ::/  .  .:: \\                     \n");
    printf(".............................................                    \n");
    printf("*                  Bem vindo ao jogo de advinhacao              *\n");
    printf("...........................................................      \n");
    
    printf("\n\n\n");
    
    //É necessario criar uma semente diferente para a função rand,
    //então pegamos o numero de segundos como semente e passamos para srand.
    int segundos = time(0);
    srand(segundos);
    
    int random_number = rand();
    
    int numero_secreto = random_number % 100;
    
    //Valor do chute
    int chute;
    
    // Variavel de acerto
    int acertou =0;
    
    // Escolha do nivel de dificuldade
    int nivel;
    printf("Nivel de dificuldade quer jogar\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d",&nivel);
    
    //Variavel nivel
    int numero_tentativas, i;
    
    if (nivel == 1){
        numero_tentativas = 20;
    }
    else if(nivel == 2){
        numero_tentativas = 10;
    }
    else{
        numero_tentativas = 5;
    }
        
    
    for (i = 1; i <= numero_tentativas; i++){
        
        printf("\n\nVoce tem %d tentativas, boa sorte!!\n\n", numero_tentativas);
        
        printf("\n\n***********************************************\n");
        
        //Imprime a vida atual
        printf("\n\nTentativa numero %d\n", i);
        
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
        
        acertou = (chute == numero_secreto);
        
        int maior = chute > numero_secreto;

        if (acertou){
            break;
        }
        else if (maior){
            printf("\nSeu chute foi maior que o numero secreto.\n");
        }
        else {
            printf("\nSeu chute foi menor que o numero secreto.\n");
        }
    }
    
    printf("Fim de Jogo!\n");
    
    if(acertou){
            system("cls");
            printf("********************************************\n");
            printf("\n*         Voce acertou, parabens!          *\n");
            printf("\n*  Voce acertou o jogo em %d tentativas  *\n", i);
            printf("\n********************************************\n");
    }
    else{
            system("cls");
            printf("*********************************************\n");
            printf("*      Voce perdeu, tente novamente!        *\n");
            printf("*********************************************\n");
    }
    
    return 0;
    
}