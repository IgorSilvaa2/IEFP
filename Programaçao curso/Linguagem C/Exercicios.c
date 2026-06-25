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

    ////////////////////////////////////////////////////////////////////////////////////////////
    //Exercicios de Matriz 

    //1- Leitura e apresentação de uma matriz 3×3 Lê uma matriz 3×3 de números inteiros.Mostra a matriz no ecrã em formato de
tabela.
    #include <stdio.h>

int main (){
    int Mat[3][3];
    for(int i =0;i<3;i++){
        for(int j=0;j< 3;j++){
            printf("Digite o numero da Linha %d e coluna %d !\n",(i+1) ,(j+1));
            scanf("%d", &Mat[i][j]);
        }
    }
    
    for(int i =0;i<3;i++){
        printf("\n");
        for(int j=0;j< 3;j++){
            printf("%d  ", Mat[i][j]);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////
//2 - Lê novamente uma matriz 3×3.Calcula e apresenta a soma de todos os seus elementos.
#include <stdio.h>
int main(){
    int mat[3][3],soma=0;
    
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Digite numero inteiro para a linha %d, Coluna %d: ",(i+1),(j+1));
            scanf("%d",&mat[i][j]);
            soma += mat[i][j];
        }
    }
    printf("%d",soma);
     
}

//3- Lê uma matriz 4×4 de números inteiros. Determina e apresenta: o maior valor existente na matriz, a posição (linha e coluna) onde esse valor se encontra.

#include <stdio.h>
int main(){
    int mat[4][4],maior,Linha,Coluna;
    maior = mat[1][1];
    
    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("Digite numero inteiro para a linha %d, Coluna %d: ",(i+1),(j+1));
            scanf("%d",&mat[i][j]);
            if(mat[i][j] > maior){
                Linha= i;
                Coluna= j;
                maior = mat[i][j];
            }
            
        }
    }
    printf("O maior numero e %d esta na linha %d, e coluna %d",maior,(Linha+1), (Coluna+1));
     
}

//4- Lê uma matriz 3×3. Mostra apenas os elementos da diagonal principal, ou seja:
/*matriz[0][0]
matriz[1][1]
matriz[2][2]*/

#include <stdio.h>
int main(){
    int mat[3][3];
    
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Digite numero inteiro para a linha %d, Coluna %d: ",(i+1),(j+1));
            scanf("%d",&mat[i][j]);
        }
    }
    
    for(int i =0;i<3;i++){
        printf("\n");
        for(int j=0;j< 3;j++){
            printf("%d ",mat[i][j]);
        }
    }
     printf("\nOs numeros da diagonais é :%d %d %d",mat[0][0],mat[1][1],mat[2][2]);
}

//5-Lê uma matriz 3×3. Calcula e apresenta a soma dos elementos da diagonal principal.


#include <stdio.h>
int main(){
    int mat[3][3];
    
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Digite numero inteiro para a linha %d, Coluna %d: ",(i+1),(j+1));
            scanf("%d",&mat[i][j]);
        }
    }
    
    for(int i =0;i<3;i++){
        printf("\n");
        for(int j=0;j< 3;j++){
            printf("%d ",mat[i][j]);
        }
    }
     printf("\nA soma dos numeros da diagonail é :%d",(mat[0][0]+mat[1][1]+mat[2][2]));
}