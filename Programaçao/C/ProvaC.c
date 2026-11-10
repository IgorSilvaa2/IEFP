//1- Cria um programa que leia as notas de 10 alunos para um vetor.Cada nota deve estar entre 0 e 20. Se o utilizador introduzir uma nota inválida, o programa deve voltar a pedir essa mesma nota.Depois de preencher o vetor, o programa deve mostrar:Todas as notas introduzidas;A média da turma;A maior nota;A menor nota;Quantos alunos tiveram nota acima da média;Quantos alunos foram aprovados;A posição do aluno com a melhor nota;As notas por ordem inversa.
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

// 2- Lê uma matriz nxn.O programa deve calcular a soma da diagonal principal e a soma da diagonal secundária.No final, deve indicar qual das diagonais tem maior soma ou se são iguais.
#include <stdio.h>

int main() {
    
    int n,soma=0,somab=0;
    printf("Digite o tamanho da matriz :");
    scanf("%d", &n);
    
    int mat[n][n];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Digite o valor para linha %d, coluna %d:",(i+1), (j+1));
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++){
        somab += mat[i][(n-1-i)];
        for (int j = 0; j < n; j++){
            printf("%d -", mat[i][j]);
            if(i == j){
                soma += mat[i][j]; 
            }
        }
        printf("\n");
    }
    
    printf("Soma da diagonal principal: %d\n", soma);
    printf("Soma da diagonal invertida: %d\n", somab);

    return 0;
}

#include <stdio.h>

 struct produto{
    int codigo;
    int quantidade;
    float preco;
};

//Struct Exercicio 3  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
//3- Cria uma struct Produto com os campos codigo, preco e quantidade.Lê os dados de 5 produtos para um vetor de structs.O programa deve mostrar o valor total em stock de cada produto, o código do produto com maior valor em stock e a soma total do stock da loja.O valor em stock é calculado por preco * quantidade.
int main (){
    
    struct produto vet_produtos[5];
    int soma=0,maior=0;
    
    
    for(int i=0;i<5;i++){
    printf("Cadastro do produto %d\n", (i+1));
    
    printf("Codigo do produto:");
    scanf("%d", &vet_produtos[i].codigo);
    
    printf("Quantidade do produto:");
    scanf("%d", &vet_produtos[i].quantidade);
    
    printf("Preço do produto:");
    scanf("%f", &vet_produtos[i].preco);
    
    printf("A quantidade em stock do produto %d é: %d",(i+1), vet_produtos[i].quantidade);
    printf("\n>>>>>>>>>>>>>>>>>>>>>>>\n");
    
    if(vet_produtos[i].quantidade > vet_produtos[maior].quantidade){
        maior = i;
    }
    
    soma += vet_produtos[i].quantidade;
    }
    
    printf("Stock total: %d\n", soma);
    printf("O codigo do produto com maior stock é: %d", vet_produtos[maior].codigo);
    
    
}

//Struct Exercicio 4  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
//4- Cria uma struct Aluno com os campos numero, idade e nota. Lê os dados de n alunos.O programa deve mostrar os dados de todos os alunos, a média das notas, quantos alunos foram aprovados, o número do aluno com melhor nota, os alunos com idade maior ou igual a 18 anos.Um aluno é aprovado se tiver nota maior ou igual a 10.