#include <stdio.h>

int main()
{
   int numeros[5];
   int i, count = 0;
   
   printf("Digite 5 numeros inteiros.\n"); 
   for (i = 0; i < 5; i++) {
       scanf("%d", &numeros[i]);
   }
   
   //
   for (i = 0; i < 5; i++) {
       if (numeros[i] > 100) {
           count++;
       }
   }
    
    printf("Existem %d números maiores que 100.\n", count);
    return 0;
}
