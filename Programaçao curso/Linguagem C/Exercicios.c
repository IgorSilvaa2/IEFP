//Lê um número inteiro e mostra a sua tabuada de 1 até 10.
//Mostra todos os múltiplos de 3 entre 1 e 100.
// Se o resto da divisão por 3 for 0, então i é múltiplo de 3.

#include <stdio.h>

int main (){
    int numero, resultado, multiplo;
    printf("Digite o numero da Tabuda! ");
    scanf("%d", &numero);
        
    for(int i = 1; i<=10; i++){
        resultado = numero * i;
        printf("%d x %d = %d\n",numero,i, resultado);
        }
        
        for(int i = 1; i<=10; i++){
        resultado = numero * i;
        if (resultado >=1 && resultado <= 100 && resultado % 3 == 0){
            printf("Multiplo de 3 : %d\n", resultado);
            }
        }
    
}

//Pede ao utilizador um número positivo.Enquanto o número for
//negativo ou zero, o programa deve voltar a pedir o número.
#include <stdio.h>

int main() {
    // Write C code here
    int numero;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);

    } while (numero <= 0);
    printf("Numero valido: %d\n", numero);

    return 0;
}

//O programa deve ler números inteiros até o utilizador introduzir 0 No final, deve mostrar a soma dos números introduzidos.

#include <stdio.h>

int main (){
    
    int numero,soma=0;
    
    do{
    printf("Digite um numero ou 0 para sair !: \n");
    scanf("%d", &numero);
    
    if(numero > 0){
    soma +=numero;
    }
    
    }while(numero != 0);
    printf("A soma total é: %d", soma);
    
    
}

