
#include <stdio.h>

int main()
{
   int numeros[5];
   int i, count = 0;
   
   printf("Digite 5 numeros inteiros.\n"); 
   
   // Le os 5 numeros digitado
   for (i = 0; i < 5; i++) {
       scanf("%d", &numeros[i]);
   }
   
   //
   for (i = 0; i < 5; i++) {
       if (numeros[i] > 100) {
           count++;
       }
   }
    
    //exibe a quantidade de numeros maiores que 100    
    printf("Existem %d numeros maiores que 100\n", count);
    return 0;
}
