# include <stdio.h>

int main (){
    
    int numero1, numero2,resultado;
    char calculo;
    
    printf("digite o numero 1 \n");
    scanf ("%d",&numero1);
    printf("digite o numero2\n");
    scanf ("%d", &numero2);
    printf("escolha o calculo\n");
    scanf(" %c", &calculo);
    
    if (calculo == '+'){
       resultado = numero1 + numero2;
       printf("A soma dos numeros e : %d", resultado);
    }
    else if (calculo == '-'){
        resultado = numero1 - numero2;
        printf("A subtracao dos numero e : %d", resultado);
    }
    else if  (calculo == '/'){
        resultado = numero1 / numero2;
        printf("A divisao dos numeros e : %d", resultado);
    }
    else if (calculo == '*'){
        resultado  = numero1 * numero2;
        printf("A multiplicacao dos numeros e : %d", resultado);
    }
    return 0;
    
}