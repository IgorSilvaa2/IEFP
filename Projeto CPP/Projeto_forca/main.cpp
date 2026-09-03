#include <iostream>
#include <string>

using namespace std;

void Nome_usuario(string Nome)
{
    cin >> Nome;
    cout << "\nNome: " << Nome;
}

int main()
{
    string usuario;
    cout << "***************************" << endl;
    cout << "*      JOGO DA FORCA      *" << endl;
    cout << "***************************" << endl;

    cout << "digite o seu nome : ";
    Nome_usuario(usuario);



    return 0;
}
