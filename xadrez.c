#include <stdio.h> //biblioteca entrada e saida

    int main (){
    printf("DESAFIO XADREZ \n");    
    
    int torre = 1 , bispo = 1 ; // declaração de variaveis
        while (torre <= 5){ //estrutura while 
        torre++; // incremento
        
            printf("Torre: direita\n"); //codigo a ser executado
        }
        
        do
        {
          printf("Bispo: pra cima e direita\n");  //codigo a ser executado
          bispo++; // incremento
        } while (bispo <= 5); //estrutura do-while 

        for (int Rainha = 1; Rainha <= 5; Rainha++) //estrutura for
        {
          printf("Rainha:Pra frente \n"); //codigo a ser executado
        }
        
         return 0;

}