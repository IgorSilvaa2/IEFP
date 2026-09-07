#include <iostream>
#include <string>
#include <fstream>
#include <clocale>

using namespace std;

void Nome_usuario(string a)
{

}
void input_nome(string a){
    ofstream ficheiro("Nome_jogadores.txt", ios::app);
    if(ficheiro.is_open()){
        ficheiro << a << "\n" << "\n";
    }
    ficheiro.close();
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nome;
    int escolha = 0;

    do{
    cout << "***************************" << endl;
    cout << "*      JOGO DA FORCA      *" << endl;
    cout << "***************************" << endl;

    cout << "Escolha uma opcao";

    switch(escolha){
    case 1:
        break;
    case 2 :
        break;
    case 3 :
        break;
    }
    cout << "digite o seu nome : ";
    cin >> nome;



/*
    input_nome(Nome);

    cout << "Dezeja continuar ? 1 (Sim) - 0 (Não) : ";
    cin >> Escolha;
    }while(Escolha != 0);

    ofstream teste;

    teste.open("teste.txt", std::ios_base::app);
    teste << Nome;
    teste.close();*/

    return 0;
}
