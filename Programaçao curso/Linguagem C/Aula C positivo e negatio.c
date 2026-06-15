# include <stdio.h>

int main ()
{
    
    int numero;
    
    printf("digite um numero !!\n");
    scanf ("%d", &numero);
    
     if (numero > 0 ){
         printf("positivo");
     }
         else if (numero < 0){
            printf("negativo");
         }
         else {
             printf("0");
         }
         
      return 0;
 }