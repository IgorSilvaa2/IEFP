//3.Um professor tem uma turma de tamanho desconhecido.
//Vai introduzir as notas dos alunos uma a uma.
//Quando introduzir o valor -1, significada que não há mais alunos.
//No final, apresenta quantos alunos passaram (nota >= 10), qunatos chumbaram e a média da turma.

#include <stdio.h>

int main() {
    
    float nota, passou = 0, chumbou = 0, media = 0;
        
    do
    {
    printf("Digite a nota do Aluno : \n");
    scanf("%f",&nota );
        while (nota < -1){
            printf("Invalido digite novamente :\n");
            scanf("%f", &nota);
        }
        if (nota >= 10)
        {
            passou +=1;
            media += nota;
        }
        else if (nota < 10 && nota > -1 )
        {
            chumbou += 1;
            media += nota;
        }
        
    }while(nota > -1);
    
    media = media/(passou+chumbou);
        printf("Passaram %f alunos :\n", passou);
        printf("Chumbaram %f alunos :\n", chumbou);
        printf("A media e  : %f \n", media);
        

    return 0;
}