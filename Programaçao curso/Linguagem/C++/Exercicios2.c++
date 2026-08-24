// Exercício 1 Criar um programa que leia dois números e mostre:  som,subtração,multiplicação,Divisão

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;

    cout << "A soma dos numero é :" << a + b << "\n";
    cout << "A subtração dos numero é :" << a - b << "\n";
    cout << "A multiplicaçao dos numero é :" << a * b << "\n";
    cout << "A divisão dos numero é :" << a / b << "\n";
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Exercício 2 Criar um programa que leia a idade. de uma pessoa e indique se: é maior de idade ou é menor de idade

#include <iostream>
using namespace std;

int main()
{
    int idade;
    cout << "Digite a sua idade: ";
    cin >> idade;

    if (idade < 18)
    {
        cout << "Menor de idade\n";
    }
    else
    {
        cout << "Maior de idade\n";
    }

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Exercício 3 Criar um programa que leia um número e indique se é: positivo, negativo, zero

#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;

    if (numero > 0)
    {
        cout << "Numero positivo\n";
    }
    else if (numero < 0)
    {
        cout << "Numero negativo\n";
    }
    else
    {
        cout << "Numero igual a zero\n";
    }

    return 0;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Exercício 4 Criar um programa que leia três números e mostre qual é o maior.

#include <iostream>
using namespace std;

int main()
{
    int n[3], maior = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Digite o " << (i + 1) << "° numero: ";
        cin >> n[i];
        if (n[i] > maior)
        {
            maior = n[i];
        }
    }

    bool teste = true;

    for (int i = 0; i < 3; i++)
    {
        if (n[i] != n[0])
        {
            teste = false;
            break;
        }
    }

    if (teste)
    {
        cout << "Todos são iguais";
    }
    else
    {
        cout << "O maior numero é :" << maior;
    }

    return 0;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Exercício 5 Crie um programa em C++ que apresente um menu de opções ao utilizador. O programa deve mostrar no ecrã o seguinte menu:
// 1 - Soma
// 2- Subtração
// 3- Multiplicação
// 4 - Divisão
// O utilizador deve introduzir dois números e escolher a opção do menu correspondente à operação que pretende realizar.
// O programa deve então:
// Executar a operação escolhida;
// Apresentar o resultado da operação;
// Caso o utilizador introduza uma opção diferente das apresentadas, mostrar a mensagem "Opção inválida". //

#include <iostream>
using namespace std;

int main()
{
    int menu, n1, n2;

    cout << "Digite o 1° numero : ";
    cin >> n1;
    cout << "Digite o 2°° numero : ";
    cin >> n2;

    cout << "\n";
    cout << "Esolha uma opçao do menu !!\n";
    cout << " 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão\n";

    cout << "\nEscolha: ";
    cin >> menu;

    while (menu < 1 || menu > 4)
    {
        cout << "Opção invalida escolha novamente: ";
        cin >> menu;
    }

    switch (menu)
    {
    case 1:
        cout << "Opção soma escolhida: " << (n1 + n2);
        break;
    case 2:
        cout << "Opção subtração escolhida: " << (n1 - n2);
        break;
    case 3:
        cout << "Opção multiplicação escolhida: " << (n1 * n2);
        break;
    case 4:
        cout << "Opção divisão escolhida: " << (n1 / n2);
        break;
    }

    return 0;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Exercício 6 Crie um programa em C++ que peça ao utilizador para introduzir um número inteiro positivo. O programa deve mostrar no ecrã todos os números de 1 até ao número introduzido.

#include <iostream>
using namespace std;

int main()
{
    int n1;

    cout << "Digite um numero positivo : ";
    cin >> n1;

    while (n1 < 0)
    {
        cout << "Numero negativo digite novamente : ";
        cin >> n1;
    }

    for (int i = 0; i < n1; i++)
    {
        cout << (i + 1) << "\n";
    }

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Exercício 7 Crie um programa que peça ao utilizador para introduzir 5 números inteiros. O programa deve calcular e mostrar a soma total dos números introduzidos.

#include <iostream>
using namespace std;

int main()
{
    int n[5], soma = 0;

    cout << "Digite 5 numeros inteiros : \n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o " << (i + 1) << "° numero inteiro : ";
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

int main()
{
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    cout << "Tabuado do " << n << "\n";
    for (int i = 0; i < 10; i++)
    {
        cout << n << " x " << (i + 1) << " = " << (n * (i + 1)) << "\n";
    }

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Exercício 9 Crie um programa que peça repetidamente ao utilizador para introduzir números. O programa deve continuar a pedir números até que o utilizador introduza o número 0. No final, o programa deve apresentar a soma de todos os números introduzidos (exceto o 0).

#include <iostream>
using namespace std;

int main()
{
    int n, soma;

    while (n != 0)
    {
        cout << "Digite um numero: ";
        cin >> n;
        soma += n;
    }

    cout << "soma dos numero: " << soma;
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Exercício 10 Crie um programa que peça ao utilizador para introduzir um número inteiro positivo. O programa deve calcular e mostrar o fatorial desse número. Exemplo: 5!= 5 × 4 × 3 × 2 × 1 = 120

#include <iostream>
using namespace std;

int main()
{
    int n = 0, fator = 0, n2;

    while (n <= 0)
    {
        cout << "Digite um numero positivo: ";
        cin >> n;
    }

    fator = n;
    cout << n << "!= ";
    for (int i = n; i > 1; i--)
    {
        fator = fator * (i - 1);
        cout << i << "x";
    }
    cout << "1 = " << fator;

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Struct com vetor.

// Exercício 1 - Crie uma struct chamada Aluno com os seguintes campos:
//- nome
//- idade
//- nota
// O programa deve:
//- ler os dados de um aluno
//- mostrar os dados no ecrã

#include <iostream>
#include <string>
using namespace std;

struct Aluno
{
    string nome;
    int idade;
    float nota;
};
int main()
{

    struct Aluno p1;
    cout << "Digite o seu nome: ";
    cin >> p1.nome;

    cout << "Digite o sua idade: ";
    cin >> p1.idade;

    cout << "Digite a nota: ";
    cin >> p1.nota;

    cout << p1.nome << "\n"
         << p1.idade << "\n"
         << p1.nota;

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Exercício 2 – Crie um programa que utilize a struct Aluno.
// O programa deve:
// - criar um vetor para 3 alunos
// - ler os dados de cada aluno
// - mostrar os dados de todos os alunos

#include <iostream>
#include <string>
using namespace std;

struct Aluno
{
    string nome;
    int idade;
    float nota;
};

void separador()
{
    cout << ">>>>>>>>>>>>>>> ///// >>>>>>>>>>>>>>>>\n";
}
int main()
{
    Aluno p1[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Digite o " << (i + 1) << "º nome: ";
        cin >> p1[i].nome;
        cout << "Digite a " << (i + 1) << "º idade: ";
        cin >> p1[i].idade;
        cout << "Digite a " << (i + 1) << "º nota: ";
        cin >> p1[i].nota;
        separador();
    }

    for (int i = 0; i < 3; i++)
    {
        cout << p1[i].nome << "\n"
             << p1[i].idade << "\n"
             << p1[i].nota << endl;
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

struct Aluno
{
    string nome;
    int idade;
    float nota;
};

void separador()
{
    cout << ">>>>>>>>>>>>>>> ///// >>>>>>>>>>>>>>>>\n";
}
int main()
{
    Aluno p1[5];
    float media = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o " << (i + 1) << "º nome: ";
        cin >> p1[i].nome;
        cout << "Digite a " << (i + 1) << "º idade: ";
        cin >> p1[i].idade;
        cout << "Digite a " << (i + 1) << "º nota: ";
        cin >> p1[i].nota;
        separador();
        media += p1[i].nota;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << p1[i].nome << "\n"
             << p1[i].idade << "\n"
             << p1[i].nota << endl;
        separador();
    }

    cout << "A media dos Alunos é: " << (media / 5);
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

struct Aluno
{
    string nome;
    int idade;
    float nota;
};

void separador()
{
    cout << "\n>>>>>>>>>>>>>>> ///// >>>>>>>>>>>>>>>>\n";
}
int main()
{
    Aluno p1[5];
    float media = 0, melhor;
    string melhor_aluno;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o " << (i + 1) << "º nome: ";
        cin >> p1[i].nome;
        cout << "Digite a " << (i + 1) << "º idade: ";
        cin >> p1[i].idade;
        cout << "Digite a " << (i + 1) << "º nota: ";
        cin >> p1[i].nota;
        separador();
        media += p1[i].nota;
    }

    melhor = p1[0].nota;
    melhor_aluno = p1[0].nome;

    for (int i = 0; i < 5; i++)
    {
        cout << p1[i].nome << "\n"
             << p1[i].idade << "\n"
             << p1[i].nota << endl;
        separador();

        if (p1[i].nota > melhor)
        {
            melhor = p1[i].nota;
            melhor_aluno = p1[i].nome;
        }
    }

    cout << "A media dos Alunos é: " << (media / 5);
    separador();
    cout << "O melhor Aluno é: " << melhor_aluno << " - sua nota é: " << melhor;
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

struct Aluno
{
    string nome;
    int idade;
    float nota;
};

void separador()
{
    cout << "\n>>>>>>>>>>>>>>> ///// >>>>>>>>>>>>>>>>\n";
}
int main()
{
    Aluno p1[5];
    float media = 0, melhor, aprovado = 0;
    string melhor_aluno;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o " << (i + 1) << "º nome: ";
        cin >> p1[i].nome;
        cout << "Digite a " << (i + 1) << "º idade: ";
        cin >> p1[i].idade;
        cout << "Digite a " << (i + 1) << "º nota: ";
        cin >> p1[i].nota;
        separador();
        media += p1[i].nota;
    }

    melhor = p1[0].nota;
    melhor_aluno = p1[0].nome;

    for (int i = 0; i < 5; i++)
    {
        cout << p1[i].nome << "\n"
             << p1[i].idade << "\n"
             << p1[i].nota << endl;
        separador();

        if (p1[i].nota > melhor)
        {
            melhor = p1[i].nota;
            melhor_aluno = p1[i].nome;
        }
        if (p1[i].nota >= 10)
        {
            aprovado = aprovado + 1;
        }
    }

    cout << "A media dos Alunos é: " << (media / 5);
    separador();
    cout << "O melhor Aluno é: " << melhor_aluno << " - sua nota é: " << melhor;
    separador();
    cout << "Alunos aprovados: " << aprovado;

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Matriz

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

void separador()
{
    cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
}

int main()
{

    int mat[3][3];

    cout << "Digite o valor para matriz \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o valor para linha " << (i + 1) << " e linha " << (j + 1) << " :";
            cin >> mat[i][j];
        }
        cout << "\n";
    }

    separador();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
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

void separador()
{
    cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
}

int main()
{

    int mat[3][3], soma = 0;

    cout << "Digite o valor para matriz \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o valor para linha " << (i + 1) << " e linha " << (j + 1) << " :";
            cin >> mat[i][j];
        }
        cout << "\n";
    }

    separador();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
            soma += mat[i][j];
        }
        cout << "\n";
    }

    separador();
    cout << soma;

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

void separador()
{
    cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
}

int main()
{

    int mat[3][3], soma = 0, maior;

    cout << "Digite o valor para matriz \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o valor para linha " << (i + 1) << " e linha " << (j + 1) << " :";
            cin >> mat[i][j];
        }
        cout << "\n";
    }

    separador();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
            soma += mat[i][j];
        }
        cout << "\n";
    }

    maior = mat[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
            }
        }
    }

    separador();
    cout << "A soma da matriz e: " << soma;
    separador();
    cout << "O maior numero da matriz e: " << maior;

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

void separador()
{
    cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
}

int main()
{

    int mat[3][3], soma = 0, maior, soma_linha;

    cout << "Digite o valor para matriz \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o valor para linha " << (i + 1) << " e linha " << (j + 1) << " :";
            cin >> mat[i][j];
        }
        cout << "\n";
    }

    separador();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
            soma += mat[i][j];
        }
        cout << "\n";
    }

    maior = mat[0][0];
    for (int i = 0; i < 3; i++)
    {
        soma_linha = 0;
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
            }
            soma_linha += mat[i][j];
        }
        cout << "Soma da " << (i + 1) << "º linha:" << soma_linha;
        cout << "\n";
    }

    separador();
    cout << "A soma da matriz e: " << soma;
    separador();
    cout << "O maior numero da matriz e: " << maior;

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

void separador()
{
    cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
}

int main()
{

    int mat[3][3], soma = 0, maior, soma_linha, soma_coluna;

    cout << "Digite o valor para matriz \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o valor para linha " << (i + 1) << " e linha " << (j + 1) << " :";
            cin >> mat[i][j];
        }
        cout << "\n";
    }

    separador();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
            soma += mat[i][j];
        }
        cout << "\n";
    }

    maior = mat[0][0];
    for (int i = 0; i < 3; i++)
    {
        soma_linha = 0;
        soma_coluna = 0;
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
            }
            soma_linha += mat[i][j];
            soma_coluna += mat[j][i];
        }
        cout << "\nSoma da " << (i + 1) << "º linha:" << soma_linha;
        cout << "\n";
        cout << "Soma da " << (i + 1) << "º coluna:" << soma_coluna;
    }

    separador();
    cout << "A soma da matriz e: " << soma;
    separador();
    cout << "O maior numero da matriz e: " << maior;

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

void separador()
{
    cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
}

int main()
{

    int mat[3][3], soma = 0, maior, soma_linha, soma_coluna;

    cout << "Digite o valor para matriz \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o valor para linha " << (i + 1) << " e linha " << (j + 1) << " :";
            cin >> mat[i][j];
        }
        cout << "\n";
    }

    separador();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
            soma += mat[i][j];
        }
        cout << "\n";
    }

    maior = mat[0][0];
    for (int i = 0; i < 3; i++)
    {
        soma_linha = 0;
        soma_coluna = 0;
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
            }
            soma_linha += mat[i][j];
            soma_coluna += mat[j][i];
        }
        cout << "\nSoma da " << (i + 1) << "º linha:" << soma_linha;
        cout << " -- ";
        cout << "Soma da " << (i + 1) << "º coluna:" << soma_coluna;
        cout << "\n";
        cout << "Elemento da diagonal: " << mat[i][i];
    }

    separador();
    cout << "A soma da matriz e: " << soma;
    separador();
    cout << "O maior numero da matriz e: " << maior;

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*Vetor treino*/

#include <iostream>
#include <string>
using namespace std;

void separador()
{
    cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> // >>>>>>>>>>>>>>>>\n";
};

int main()
{
    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vet[n], troca;

    for (int i = 0; i < n; i++)
    {
        cout << "Digite o " << (i + 1) << "º numero: ";
        cin >> vet[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (vet[j] > vet[(j + 1)])
            {
                troca = vet[(j + 1)];
                vet[(j + 1)] = vet[j];
                vet[j] = troca;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << vet[i] << " \n";
    }
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// ponteiros//

/* Exercício 1
Cria uma variável int numero = 10 e um ponteiro que
aponte para ela. Mostra:
• o valor de numero;
• o endereço de numero;
• o valor guardado no ponteiro;
• o valor obtido através de *ponteiro. */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numero = 10;
    int *p = &numero;

    cout << numero << endl;
    cout << &numero << endl;
    cout << &p << endl;
    cout << *p << endl;

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*Exercício 2
Cria:
int pontos = 20;
int *p = &pontos;
Usa apenas o ponteiro para alterar pontos para 50. */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int pontos = 20;
    int *p = &pontos;

    *p = 50;
    cout << pontos;
    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*Exercício 3
int x = 5;
int *p = &x;
*p = 12;
cout << x;  verifiquei soente o codigo
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x = 5;
    int *p = &x;
    *p = 12;
    cout << x;

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*Exercício 4
int *p = NULL;
cout << *p;
Explica qual é o problema. tenta pegar um ponteiro que nao aponta pra nenhum endereço da memoria.
*/

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*Exercício 5
int valores[] = {4, 8, 12};
int *p = valores;
Mostra o primeiro elemento usando apenas p.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int valores[] = {4, 8, 12};
    int *p = valores;

    cout << *p << endl;

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*Exercício 6
Usando o mesmo array, mostra:
4
8
12
sem utilizar valores[0], valores[1] ou valores[2].
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int valores[3] = {4, 8, 12};

    for (int *p = valores; p != valores + 3; p++)
    {
        cout << *p << endl;
    }

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Funções
//  1-Crie uma função que mostre amensagem "Olá Mundo".O programa deve chamar essa função no main.

#include <iostream>
#include <string>

using namespace std;

void menssagem()
{
    cout << "Olá Mundo";
}

int main()
{

    menssagem();

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/* 2-Crie uma função que devolva o
valor dobro de um número inteiro. O
programa deve:
• pedir um número ao utilizador
• mostrar o resultado usando a função*/

#include <iostream>
#include <string>

using namespace std;

int dobro(int a)
{
    return a * 2;
}

int main()
{

    int numero;

    cout << "Digite um numero: ";
    cin >> numero;
    cout << "O dobro do numero é: " << dobro(numero);

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/* Exercício 3 – Crie uma função que receba
dois números e mostre a soma e a subtração*/

#include <iostream>
#include <string>

using namespace std;

void conta(int a, int b)
{
    cout << "A soma dos numeros é: " << (a + b) << endl;
    cout << "A subtraçao dos numeros é: " << (a - b) << endl;
}

int main()
{

    int numero1, numero2;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;
    conta(numero1, numero2);

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/* Exercício 4 – Crie uma função que receba
dois números e devolva o maior valor.*/

#include <iostream>
#include <string>

using namespace std;

int maior(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{

    int numero1, numero2;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;
    maior(numero1, numero2);
    cout << "O maior numero e: " << maior(numero1, numero2);

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/* Exercício 5 – Crie um programa que:
• leia 5 números para um vetor
• utilize uma função para mostrar todos os
valores do vetor*/

#include <iostream>
#include <string>

using namespace std;

void vetor(int a[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{

    int numero[5];

    cout << "Digite 5 numeros para um vetor! " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o valor " << (i + 1) << ": ";
        cin >> numero[i];
    }

    vetor(numero);

    return 0;
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/* Exercício 6 – Crie uma função que receba um
vetor e o seu tamanho. A função deve
devolver a média dos valores.*/

#include <iostream>
#include <string>

using namespace std;

float vetor (int a[],int tamanho ){
    float media=0;
        for( int i= 0;i<tamanho;i++){
            media += a[i]; 
        }
        return  (media / tamanho);
}

int main() {
    
    int a;
    cout << "Digite o tamanho do vetor: " ;
    cin >> a;
    int vet[a];

    for(int i = 0; i< a; i++){
        cout << "Digite o valor "<< (i+1) << ": ";
        cin >> vet[i];  
    }

    cout << vetor(vet,a);
    
    

    return 0;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Exercício 7 – Crie uma função que receba um vetor e devolva quantos números pares existem.
#include <iostream>
#include <string>

using namespace std;


int vetor (int a[], int b ){
    int par=0;
    for (int i=0;i<b;i++){
        if ((a[i] % 2) == 0){
            par = par +1;
        }
    }
    return par;
}
int main() {
    
    int a;
    cout << "Digite o tamanho do vetor : ";
    cin >> a;

    int vet[a];

    for (int i =0;i<a;i++){
        cout << "Digite o "<< (i+1)<< " valor :" ;
        cin >> vet[i];
    }

    cout << "Existe " << vetor(vet,a)<< " numeros par !";

    return 0;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*Exercício 8 – Crie uma função que receba
uma variável por referência e, altere o seu
valor para o dobro. O programa deve mostrar
o valor antes e depois.*/

#include <iostream>
#include <string>
using namespace std;

void Dobro (int &a) {
    a = a* 2;
    cout << "O dobro do numero e: "<< a;
}

int main() {
    int numero;

    cout<< "Digite um numero: ";
    cin >> numero;

    cout<< "Numero digitado: "<< numero << "\n";
    
    Dobro (numero);
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*Exercício 9 – Crie uma função que receba
uma matriz 3x3 e mostre todos os elementos*/

#include <iostream>
#include <string>
using namespace std;

void matriz (int a[3][3]) {
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            cout << a[i][j]<< "  ";
        }
        cout << "\n";
    }
}

int main() {
    int mat[3][3];

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            cout << "Digite o numero para linha "<< (i+1)<< " coluna "<< (j+1)<< " : ";
            cin >> mat [i][j];
        }
    }

    matriz(mat);
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*Exercício 10 – Crie uma struct Aluno com
nome e Nota.
Crie uma função que receba um aluno e
mostre os seus dados.*/

#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    float nota;
};

void Recebe_Aluno (Aluno a) {
    cout <<"Nome do Aluno: "<< a.nome<< "\n";
    cout <<"Nota do Aluno: "<< a.nota;

}

int main() {
    struct Aluno a;

    cout << "Digite o nome do aluno: ";
    cin >> a.nome;
    cout << "Digite a nota do aluno: ";
    cin >> a.nota;


    Recebe_Aluno(a);
}