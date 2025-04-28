#include <stdio.h>

int main(){
   
   //Declaração da carta 1

   int NomedaCidade1;
   int Populacao1 = 12.300;
   char CodigodaCarta1;
   char Estado1;
   float Area1;
   float Pib1;
   
   //Declaração da carta 2

   int NomedaCidade2;
   int Populacao2 = 15.000;
   char CodigodaCarta2;
   char Estado2[10];
   float Area2;
   float Pib2;

//Comparando a População

   printf("Populacao1: %s\n", "Brasilia");
   printf("Populacao2: %s\n", "SaoPaulo");

   if (Populacao1 > Populacao2){
      printf("Resulatado: Brasilia venceu! \n");
   }
    else if ("Populacao1 < Populacao2"){
   
   printf("Resultado: SaoPaulo venceu!\n");
} else{
   printf("Resultado: Empate!\n");
}


   
}

