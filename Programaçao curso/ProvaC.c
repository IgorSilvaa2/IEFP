#include <stdio.h>

int main() {
    float alunos [10],media,menor,maior,aprovados;
    int posicao=0;
     
     printf("Digite a nota dos alunos\n");
     for (int i = 0; i<10; i++){
        printf("Nota %d: ", (i+1));
        scanf ("%f", &alunos[i]);
        while (alunos[i] < 0 || alunos[i] > 20){
            printf("Nota invalida digite novamente\n");
            scanf ("%f", &alunos[i]);
        }
        
     }
     printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
     
     for (int i = 0; i<10; i++){
        printf("Nota %d: %.2f \n", (i+1), alunos[i]);
        media += alunos[i];
    }
        
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    maior = alunos[0];
    menor = alunos[0];
    for (int i = 0; i<10; i++){
        if(alunos[i] > maior){
            maior = alunos[i];
            posicao = i;
        }else if (alunos[i]< menor){
            menor = alunos[i];
        }
    }
    
    media = media/10;
    printf("Media dos alunos : %.2f\n", media);
    printf("Maior nota: %.2f\n",maior);
    printf("Menor nota: %.2f\n",menor);
    
    
    for (int i = 0; i<10; i++){
        if(alunos[i] > media){
            aprovados = aprovados + 1;
        }
    }
    
    printf("Alunos acima da media e aprovados : %.1f\n",aprovados);
    printf("Posição da melhor nota : %d \n",(posicao+1));
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    
    printf("Notas ao contrario \n" );
    for (int i = 9; i>=0; i--){
        printf("Nota %d: %.2f \n",(i+1), alunos[i]);
        }
        

    return 0;
}

//matriz Exercicio 2  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>// 

#include <stdio.h>

int main (){
    int l,c, soma=0,somab=0;
    
    printf("Digite a quantidade de linhas da matriz ! :");
    scanf("%d", &l);
    printf("Digite a quantidade de colunas da matriz ! :");
    scanf("%d", &c);
    
    int mat[l][c];
    
    for (int i= 0; i< l; i++){
        for (int j= 0; j<c ; j++){
            printf("Digite o valor da linha %d, e coluna %d :", (i+1),(j+1));
            scanf("%d",&mat[i][j]);
        }
    }
    
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    for (int i= 0; i< l; i++){
        somab += mat[i][(l-1-i)];
        for (int j= 0; j< c; j++){
            printf(" %d -", mat[i][j]);
            if(i == j){
                soma += mat[i][j];
            }
        }
        printf("\n");
    }
    
    
    
    printf("Soma da diagonal principal %d \n", soma);
    printf("Soma da diagonal secundaria %d \n", somab);
    
    
    
}
