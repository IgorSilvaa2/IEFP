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