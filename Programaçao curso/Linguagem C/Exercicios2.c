//Digite numero inteiro e diga se o numero e positivo ou negativo ou se e zero
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