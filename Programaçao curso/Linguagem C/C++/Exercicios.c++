// Exercício 1 Criar um programa que leia dois números e mostre:  som,subtração,multiplicação,Divisão 

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    
    cout << "A soma dos numero é :" <<a+b << "\n";
    cout << "A subtração dos numero é :" <<a-b<< "\n";
    cout << "A multiplicaçao dos numero é :" <<a*b<< "\n";
    cout << "A divisão dos numero é :" <<a/b<< "\n";
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Exercício 2 Criar um programa que leia a idade. de uma pessoa e indique se: é maior de idade ou é menor de idade 

#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Digite a sua idade: ";
    cin >> idade;
    
    if(idade < 18){
        cout << "Menor de idade\n";    
    }else{
        cout << "Maior de idade\n";
    }
    
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Exercício 3 Criar um programa que leia um número e indique se é: positivo, negativo, zero 
 
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;
    
    if(numero > 0 ){
        cout << "Numero positivo\n";    
    }else if (numero <0){
        cout << "Numero negativo\n";
    }else{
        cout << "Numero igual a zero\n";
    }
    
    return 0;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Exercício 4 Criar um programa que leia três números e mostre qual é o maior. 

 
#include <iostream>
using namespace std;

int main() {
    int n[3],maior=0;
    
    for(int i=0;i<3;i++){
    cout << "Digite o " <<(i+1)<< "° numero: ";
    cin >> n[i];
        if(n[i] > maior){
            maior = n[i];
        }
    }
    
    bool teste= true;
    
    for(int i=0;i<3;i++){
        if(n[i] != n[0]){
            teste= false;
            break;
        }
    }
    
    if(teste){
        cout << "Todos são iguais";
    }else{
        cout << "O maior numero é :" << maior;
    }
    
    return 0;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Exercício 5 Crie um programa em C++ que apresente um menu de opções ao utilizador. O programa deve mostrar no ecrã o seguinte menu: 
//1 - Soma 
//2- Subtração 
//3- Multiplicação 
//4 - Divisão 
//O utilizador deve introduzir dois números e escolher a opção do menu correspondente à operação que pretende realizar. 
//O programa deve então: 
//Executar a operação escolhida; 
//Apresentar o resultado da operação; 
//Caso o utilizador introduza uma opção diferente das apresentadas, mostrar a mensagem "Opção inválida". //
 
#include <iostream>
using namespace std;

int main() {
    int menu,n1,n2;
    
    cout << "Digite o 1° numero : ";
    cin >> n1;
    cout << "Digite o 2°° numero : ";
    cin >> n2;
    
    
    cout <<"\n";
    cout <<"Esolha uma opçao do menu !!\n";
    cout <<" 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão\n";
    
    cout<< "\nEscolha: ";
    cin >> menu;
    
    while(menu < 1 || menu > 4){
        cout <<"Opção invalida escolha novamente: ";
        cin >> menu;
    }
    
    
    switch (menu){
        case 1:
            cout << "Opção soma escolhida: " << (n1 + n2);
            break;
        case 2:
            cout << "Opção subtração escolhida: " << (n1 - n2);
            break;
        case 3:
            cout << "Opção multiplicação escolhida: " <<(n1 * n2);
            break;
        case 4:
            cout << "Opção divisão escolhida: " <<(n1 / n2);
            break;
    }
    
    return 0;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Exercício 6 Crie um programa em C++ que peça ao utilizador para introduzir um número inteiro positivo. O programa deve mostrar no ecrã todos os números de 1 até ao número introduzido. 

#include <iostream>
using namespace std;

int main() {
    int n1;
    
    cout << "Digite um numero positivo : ";
    cin >> n1;
    
    while (n1 < 0){
        cout << "Numero negativo digite novamente : ";
        cin >> n1;
    }
    
    for(int i=0;i< n1;i++){
        cout << (i+1)<< "\n";
    }
    
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Exercício 7 Crie um programa que peça ao utilizador para introduzir 5 números inteiros. O programa deve calcular e mostrar a soma total dos números introduzidos. 

#include <iostream>
using namespace std;

int main() {
    int n[5],soma=0;
    
    cout << "Digite 5 numeros inteiros : \n";
    for(int i=0;i<5;i++){
        cout << "Digite o "<<(i+1) << "° numero inteiro : ";
        cin >> n[i];
        soma += n[i];
        }
    cout << "A soma total é: " << soma;
    
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Exercício 8 Crie um programa que peça ao utilizador para introduzir um número inteiro. O programa deve apresentar a tabuada desse número de 1 a 10. 
 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    
    cout << "Tabuado do " << n<< "\n";
    for(int i=0;i<10;i++){
        cout << n <<" x "<< (i+1)<< " = "<< (n*(i+1))<< "\n";
        
        }
    
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Exercício 9 Crie um programa que peça repetidamente ao utilizador para introduzir números. O programa deve continuar a pedir números até que o utilizador introduza o número 0. No final, o programa deve apresentar a soma de todos os números introduzidos (exceto o 0). 
 
#include <iostream>
using namespace std;

int main() {
    int n,soma;
    
    while(n != 0){
    cout << "Digite um numero: ";
    cin >> n;
    soma += n;
    }
    
    cout << "soma dos numero: "<<soma;
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 
// Exercício 10 Crie um programa que peça ao utilizador para introduzir um número inteiro positivo. O programa deve calcular e mostrar o fatorial desse número. Exemplo: 5!= 5 × 4 × 3 × 2 × 1 = 120 
 
#include <iostream>
using namespace std;

int main() {
    int n=0,fator=0,n2;
    
    while(n <= 0){
    cout << "Digite um numero positivo: ";
    cin >> n;
    }
    
    fator = n;
    cout << n<<"!= ";
    for(int i=n;i>1;i--){
           fator = fator * (i-1);
           cout << i<< "x";
    }
    cout <<"1 = "<< fator;
    
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Struct com vetor.

// Exercício 1 - Crie uma struct chamada Aluno com os seguintes campos:
//- nome
//- idade
//- nota
//O programa deve:
//- ler os dados de um aluno
//- mostrar os dados no ecrã

#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;    
    int idade;
    float nota;
};
int main() {
    
    struct Aluno p1;
     cout << "Digite o seu nome: ";
     cin >> p1.nome;
     
     cout << "Digite o sua idade: ";
     cin >> p1.idade;
     
     cout << "Digite a nota: ";
     cin >> p1.nota;
     
     cout << p1.nome << "\n" << p1.idade << "\n"<<p1.nota;

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Exercício 2 – Crie um programa que utilize a struct Aluno.
//O programa deve:
// - criar um vetor para 3 alunos
// - ler os dados de cada aluno
// - mostrar os dados de todos os alunos

#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;    
    int idade;
    float nota;
};

void separador (){
    cout << ">>>>>>>>>>>>>>> ///// >>>>>>>>>>>>>>>>\n";
}
int main() {
    Aluno p1[3];
    
    for(int i = 0;i<3;i++){
        cout << "Digite o "<< (i+1)<< "º nome: ";
        cin >> p1[i].nome;
        cout << "Digite a "<< (i+1)<< "º idade: ";
        cin >> p1[i].idade;
        cout << "Digite a "<< (i+1)<< "º nota: ";
        cin >> p1[i].nota;
        separador();
    }
     
     for(int i = 0;i<3;i++){
     cout << p1[i].nome << "\n" << p1[i].idade << "\n"<<p1[i].nota << endl;
     separador();
     
    }
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*Exercício 3 – Crie um programa com uma struct Aluno.
O programa deve:
- ler os dados de 5 alunos
- Calcular e mostrar a média das notas*/

#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;    
    int idade;
    float nota;
};

void separador (){
    cout << ">>>>>>>>>>>>>>> ///// >>>>>>>>>>>>>>>>\n";
}
int main() {
    Aluno p1[5];
    float media=0;
    
    for(int i = 0;i<5;i++){
        cout << "Digite o "<< (i+1)<< "º nome: ";
        cin >> p1[i].nome;
        cout << "Digite a "<< (i+1)<< "º idade: ";
        cin >> p1[i].idade;
        cout << "Digite a "<< (i+1)<< "º nota: ";
        cin >> p1[i].nota;
        separador();
        media += p1[i].nota;
    }
     
     for(int i = 0;i<5;i++){
     cout << p1[i].nome << "\n" << p1[i].idade << "\n"<<p1[i].nota << endl;
     separador();
    }
    
    cout << "A media dos Alunos é: "<<(media/5);
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*Exercício 4 – Crie um programa que:
- Leia os dados de 5 alunos
- determine qual é o aluno com a melhor nota
- mostre o nome e a nota desse aluno*/

#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;    
    int idade;
    float nota;
};

void separador (){
    cout << "\n>>>>>>>>>>>>>>> ///// >>>>>>>>>>>>>>>>\n";
}
int main() {
    Aluno p1[5];
    float media=0,melhor;
    string melhor_aluno;
    
    for(int i = 0;i<5;i++){
        cout << "Digite o "<< (i+1)<< "º nome: ";
        cin >> p1[i].nome;
        cout << "Digite a "<< (i+1)<< "º idade: ";
        cin >> p1[i].idade;
        cout << "Digite a "<< (i+1)<< "º nota: ";
        cin >> p1[i].nota;
        separador();
        media += p1[i].nota;
    }
     
     melhor = p1[0].nota;
     melhor_aluno = p1[0].nome;
     
     for(int i = 0;i<5;i++){
     cout << p1[i].nome << "\n" << p1[i].idade << "\n"<<p1[i].nota << endl;
     separador();
     
        if (p1[i].nota > melhor)
        {
            melhor = p1[i].nota;
            melhor_aluno = p1[i].nome;
        }
    }
    
    cout << "A media dos Alunos é: "<<(media/5);
    separador();
    cout << "O melhor Aluno é: "<< melhor_aluno<< " - sua nota é: "<< melhor ;
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*Exercício 5 – Crie um programa que:
- leia os dados de 5 alunos
- considere que a nota mínima para aprovação é 10
- indique quantos alunos estão aprovados*/

#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;    
    int idade;
    float nota;
};

void separador (){
    cout << "\n>>>>>>>>>>>>>>> ///// >>>>>>>>>>>>>>>>\n";
}
int main() {
    Aluno p1[5];
    float media=0,melhor,aprovado=0;
    string melhor_aluno;
    
    for(int i = 0;i<5;i++){
        cout << "Digite o "<< (i+1)<< "º nome: ";
        cin >> p1[i].nome;
        cout << "Digite a "<< (i+1)<< "º idade: ";
        cin >> p1[i].idade;
        cout << "Digite a "<< (i+1)<< "º nota: ";
        cin >> p1[i].nota;
        separador();
        media += p1[i].nota;
    }
     
     melhor = p1[0].nota;
     melhor_aluno = p1[0].nome;
     
     for(int i = 0;i<5;i++){
     cout << p1[i].nome << "\n" << p1[i].idade << "\n"<<p1[i].nota << endl;
     separador();
     
        if (p1[i].nota > melhor)
        {
            melhor = p1[i].nota;
            melhor_aluno = p1[i].nome;
        }
        if (p1[i].nota >= 10)
        {
            aprovado = aprovado+1;
        }
    }
    
    cout << "A media dos Alunos é: "<<(media/5);
    separador();
    cout << "O melhor Aluno é: "<< melhor_aluno<< " - sua nota é: "<< melhor ;
    separador();
    cout << "Alunos aprovados: "<< aprovado;
    
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Matriz 

/*Exercício 1 - Crie um programa que leia
os valores de uma matriz 3×3.
O programa deve:
- pedir ao utilizador para introduzir os
valores da matriz
- mostrar a matriz no ecrã no formato de
tabela*/
#include <iostream>
#include <string>
using namespace std;

    void separador (){
        cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
    }
    
int main() {
    
    
    int mat [3][3];
    
    cout << "Digite o valor para matriz \n";
    
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << "Digite o valor para linha "<< (i+1)<< " e linha "<< (j+1)<<" :";
            cin >> mat[i][j];    
        }
        cout<<"\n";
    }
    
    separador();

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << mat[i][j]<< " ";
        }
        cout << "\n";
    }

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*Exercício 2 - Crie um programa que leia
uma matriz 3×3.
O programa deve calcular e mostrar a
soma de todos os valores da matriz.*/

#include <iostream>
#include <string>
using namespace std;

    void separador (){
        cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
    }
    
int main() {
    
    
    int mat [3][3],soma=0;
    
    cout << "Digite o valor para matriz \n";
    
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << "Digite o valor para linha "<< (i+1)<< " e linha "<< (j+1)<<" :";
            cin >> mat[i][j];    
        }
        cout<<"\n";
    }
    
    separador();

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << mat[i][j]<< " ";
        soma += mat[i][j];
        }
        cout << "\n";
    }
    
    separador();
    cout<< soma;

    return 0;
}


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*Exercício 3 - Crie um programa que leia
uma matriz 3×3.
O programa deve determinar e mostrar o
maior valor existente na matriz.*/

#include <iostream>
#include <string>
using namespace std;

    void separador (){
        cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
    }
    
int main() {
    
    
    int mat [3][3],soma=0,maior;
    
    cout << "Digite o valor para matriz \n";
    
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << "Digite o valor para linha "<< (i+1)<< " e linha "<< (j+1)<<" :";
            cin >> mat[i][j];    
        }
        cout<<"\n";
    }
    
    separador();

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << mat[i][j]<< " ";
            soma += mat[i][j];
            
        }
        cout << "\n";
    }
    
    maior = mat[0][0];
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }
    
    separador();
    cout<< "A soma da matriz e: "<< soma;
    separador();
    cout<< "O maior numero da matriz e: "<< maior;
    

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*Exercício 4 - Crie um programa que leia
uma matriz 3×3.
O programa deve calcular e mostrar a
soma de cada linha da matriz.*/

#include <iostream>
#include <string>
using namespace std;

    void separador (){
        cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
    }
    
int main() {
    
    
    int mat [3][3],soma=0,maior,soma_linha;
    
    cout << "Digite o valor para matriz \n";
    
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << "Digite o valor para linha "<< (i+1)<< " e linha "<< (j+1)<<" :";
            cin >> mat[i][j];    
        }
        cout<<"\n";
    }
    
    separador();

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << mat[i][j]<< " ";
            soma += mat[i][j];
        }
        cout << "\n";
    }
    
    maior = mat[0][0];
    for(int i = 0; i<3;i++){
        soma_linha=0;
        for(int j = 0; j<3;j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
            soma_linha += mat[i][j];
        }
        cout<< "Soma da "<<(i+1)<< "º linha:"<<soma_linha;
        cout<< "\n";
    }
    
    separador();
    cout<< "A soma da matriz e: "<< soma;
    separador();
    cout<< "O maior numero da matriz e: "<< maior;
    

    return 0;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*Exercício 5 – Crie um programa que leia
uma matriz 3×3.
O programa deve calcular e mostrar a
soma de cada coluna da matriz.*/

#include <iostream>
#include <string>
using namespace std;

    void separador (){
        cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
    }
    
int main() {
    
    
    int mat [3][3],soma=0,maior,soma_linha,soma_coluna;
    
    cout << "Digite o valor para matriz \n";
    
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << "Digite o valor para linha "<< (i+1)<< " e linha "<< (j+1)<<" :";
            cin >> mat[i][j];    
        }
        cout<<"\n";
    }
    
    separador();

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << mat[i][j]<< " ";
            soma += mat[i][j];
        }
        cout << "\n";
    }
    
    maior = mat[0][0];
    for(int i = 0; i<3;i++){
        soma_linha=0;
        soma_coluna=0;
        for(int j = 0; j<3;j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
            soma_linha += mat[i][j];
            soma_coluna += mat[j][i];
        }
        cout<< "\nSoma da "<<(i+1)<< "º linha:"<<soma_linha;
        cout<< "\n";
        cout<< "Soma da "<<(i+1)<< "º coluna:"<<soma_coluna;
    }
    
    separador();
    cout<< "A soma da matriz e: "<< soma;
    separador();
    cout<< "O maior numero da matriz e: "<< maior;
    

    return 0;
}

}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*Exercício 6 – Crie um programa que leia
uma matriz 3×3.
O programa deve mostrar os elementos
da diagonal principal.*/

#include <iostream>
#include <string>
using namespace std;

    void separador (){
        cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
    }
    
int main() {
    
    
    int mat [3][3],soma=0,maior,soma_linha,soma_coluna;
    
    cout << "Digite o valor para matriz \n";
    
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << "Digite o valor para linha "<< (i+1)<< " e linha "<< (j+1)<<" :";
            cin >> mat[i][j];    
        }
        cout<<"\n";
    }
    
    separador();

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout << mat[i][j]<< " ";
            soma += mat[i][j];
        }
        cout << "\n";
    }
    
    maior = mat[0][0];
    for(int i = 0; i<3;i++){
        soma_linha=0;
        soma_coluna=0;
        for(int j = 0; j<3;j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
            soma_linha += mat[i][j];
            soma_coluna += mat[j][i];
        }
        cout<< "\nSoma da "<<(i+1)<< "º linha:"<<soma_linha;
        cout<< " -- ";
        cout<< "Soma da "<<(i+1)<< "º coluna:"<<soma_coluna;
        cout<< "\n";
        cout <<"Elemento da diagonal: "<<mat[i][i];
    }
    
    separador();
    cout<< "A soma da matriz e: "<< soma;
    separador();
    cout<< "O maior numero da matriz e: "<< maior;
    

    return 0;
}