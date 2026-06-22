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
////////////////////////////////////////////////////////////////////////////////////////////

//Pede ao utilizador um número positivo.Enquanto o número for
//negativo ou zero, o programa deve voltar a pedir o número.
#include <stdio.h>

int main() {
    // Write C code here
    int numero;

    while (numero <= 0){
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);

    } 
    printf("Numero valido: %d\n", numero);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////

//O programa deve ler números inteiros até o utilizador introduzir 0 No final, deve mostrar a soma dos números introduzidos.

#include <stdio.h>

int main (){
    
    int numero,soma=0;
    
    while(numero != 0){
    printf("Digite um numero ou 0 para sair !: \n");
    scanf("%d", &numero);
    
    soma +=numero;
    
    }
    printf("A soma total é: %d", soma);
    
    
}
////////////////////////////////////////////////////////////////////////////////////////////
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
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

int main() {
    int vet[12],positivo=0,soma=0,maior,menor,posicao1,posicao2,impar,par,pesquisa,flag= 0;
    float media;
    printf("Digite valores inteiros para o  vetor! \n ");
    
    //1-
    //le o vetor
    for(int i = 0; i<12;i++){
        printf("Digite o %d° numero: ", (i+1));
        scanf("%d", &vet[i]);
    }
    
    // imprime os 10 numeros do vetor
    for(int i = 0; i<10;i++){
    printf("%d,",vet[i]);
    }
    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    //2-
    //soma os 8 primeiros numeros do vetor
    for(int i = 0; i<8;i++){
        soma += vet[i];
    }
    printf("\nA soma dos primeiros 8 numeros é: %d", soma);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    
    menor = vet[0];
    maior = vet[0];
    //3-
    for(int i = 0; i<10;i++){
        if(vet[i] > maior){
            maior= vet[i];
            posicao1 = i;
        }
        else if(vet[i] < menor ){
            menor = vet[i];
            posicao2 = i;
        }
        
    }
    printf("\nO maior numero entre 1 e 10 é %d e esta na posição %d !",maior,(posicao1+1));
    printf("\nO menor numero entre 1 e 10 é %d e esta na posição %d !",menor,(posicao2+1));
printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    //4
    for(int i = 0; i<6;i++){
        media += vet[i];
        if(vet[i] >= 10){
            positivo += +1;
        }
    }
    printf("\nEntre posiçoes 1 e 6: %d numero(s) sao igual ou maior que 10", positivo);
    printf("\nA Media dos 6 primeiros numeros é: %.2f ", (media/6));
    
    //5
    for (int i =0;i <12; i++){
        if (vet[i] % 2 == 0){
            par += +1;
        }else{
            impar+= +1;
        }
    }
    printf("\nO total de numero par é : %d\nO total de numeros impar é : %d ",par,impar);
    //6
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    
    do{
        printf("\nDigite um numero que deseja ver se esta no vetor! :");
        scanf("%d",&pesquisa);
        for(int i=0;i<10;i++){
        if(pesquisa == vet[i]){
            posicao1 = i;
            printf("\nEntre 1 e 10 o numero repete na posiçao: %d",(posicao1+1));
            flag = 1;
            }
        }
    }while(flag != 1 );
    
    return 0;
    }