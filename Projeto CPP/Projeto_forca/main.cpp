#include <iostream>
#include <string>
#include <string_view>
#include <fstream>
#include <clocale>
<<<<<<< HEAD
=======
#include <limits>
#include <ios>
#include <cstdlib>
>>>>>>> a7fab110753871a332f1c9aee0cbbe0e077e36b0
#include <ctime>

using namespace std;

/////////////////////// FUNCAO LIMPA TELA ///////////////////////////////////
void limpa_Tela()
{
    system("CLS");
}
/////////////////////// FUNCAO INPUT STRING ///////////////////////////////////
void input_String(const string& a)
{
    ofstream ficheiro("Input_String.txt", ios::app);
    if(ficheiro.is_open())
    {
        ficheiro << a << "\n";
    }
    ficheiro.close();
}
//////////////////////// FUNCAO MENU DIFICULDADDE //////////////////////////////////

void menu_Dificuldade()
{
    int dif;
    string facil[4] = {"gato","mesa","cola","casa"};
    string medio[4] = {"computador","teclado","caderno","mochila"};
    string Dificil[4] = {"paralelepipedo","inconstitucional","arquipelago","parapsicologia"};


    cout << "\n 1 - Facil";
    cout << "\n 2 - Medio";
    cout << "\n 3 - Dificil \n";

    do
    {
        cout << "Escolha uma opcao : ";
        cin >> dif ;
        if(dif == 1)
        {
            srand(time(NULL));
            int aletorio = rand() % 4;
            cout << facil[aletorio];
        }
        else if (dif == 2)
        {
            srand(time(NULL));
            int aletorio = rand() % 4;
            cout << medio[aletorio];
        }
        else if(dif == 3)
        {
            srand(time(NULL));
            int aletorio = rand() % 4;
            cout << Dificil[aletorio];
        }
        else
        {
            cout << "Opcao invalida ! \n";
        }
    }
    while(dif <1 || dif > 3);


}
////////////////////////// FUNCAO MENU ////////////////////////////////
void menu_Inicial()
{
    string nome;
    int escolha;

    do
    {
        cout << "============================================================================================\n"
<<<<<<< HEAD
     << "   _  ___   ____  ___    ____   _      _____ ___  ____   ____   _         +---+\n"
     << "  | |/ _ \\ / ___|/ _ \\  |  _ \\ / \\    |  ___/ _ \\|  _ \\ / ___| / \\        |   |\n"
     << "  | | | | | |  _| | | | | | | / _ \\   | |_ | | | | |_) | |    / _ \\       O   |\n"
     << "  | | |_| | |_| | |_| | | |_/ / ___ \\  |  _|| |_| |  _ <| |___/ ___ \\    /|\\  |\n"
     << " _/ |\\___/ \\____|\\___/  |____/_/   \\_\\ |_|   \\___/|_| \\_\\\\____/_/   \\_\\  / \\  |\n"
     << "|__/                                                                          |\n"
     << "============================================================================================\n" << "\n";
=======
             << "   _  ___   ____  ___    ____   _      _____ ___  ____   ____   _         +---+\n"
             << "  | |/ _ \\ / ___|/ _ \\  |  _ \\ / \\    |  ___/ _ \\|  _ \\ / ___| / \\        |   |\n"
             << "  | | | | | |  _| | | | | | | / _ \\   | |_ | | | | |_) | |    / _ \\       O   |\n"
             << "  | | |_| | |_| | |_| | | |_/ / ___ \\  |  _|| |_| |  _ <| |___/ ___ \\    /|\\  |\n"
             << " _/ |\\___/ \\____|\\___/  |____/_/   \\_\\ |_|   \\___/|_| \\_\\\\____/_/   \\_\\  / \\  |\n"
             << "|__/                                                                          |\n"
             << "============================================================================================\n" << endl;
>>>>>>> a7fab110753871a332f1c9aee0cbbe0e077e36b0

        cout << "Escolha uma opcao !";
        cout << "\n 1 - Jogar";
        cout << "\n 2 - Regras";
        cout << "\n 3 - Sair";
        cout << "\n =========================================\n";
        cin >> escolha;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(escolha)
        {
        case 1 :
            limpa_Tela();
            cout << "=========================================================================\n"
                 << "  ____  _____ __  __     __     ___ _   _ ____   ___  _ _ _ \n"
                 << " | __ )| ____|  \\/  |    \\ \\   / / | \\ | |  _ \\ / _ \\| | | |\n"
                 << " |  _ \\|  _| | |\\/| |     \\ \\ / /| |  \\| | | | | | | | | | |\n"
                 << " | |_) | |___| |  | |      \\ V / | | |\\  | |_| | |_| |_|_|_|\n"
                 << " |____/|_____|_|  |_|       \\_/  |_|_| \\_|____/ \\___/(_|_|_)\n"
                 << "=========================================================================\n" << "\n";

            cout << "Digite o seu nome : ";
            getline (cin,nome);
            input_String(nome);
            menu_Dificuldade();
            break;
        case 2 :
            limpa_Tela();
            cout << "\n";
            cout << "=========================================\n"
                 << "         REGRA DO JOGO DA FORCA          \n"
                 << "=========================================\n\n"
                 << "1. OBJETIVO:\n"
                 << "   Adivinhar a palavra secreta antes que o\n"
                 << "   boneco seja totalmente desenhado.\n\n"
                 << "2. COMO JOGAR:\n"
                 << "   - Introduza uma letra de cada vez.\n"
                 << "   - Se a letra existir, ela sera revelada.\n"
                 << "   - Se errar, uma parte do corpo vai para a forca.\n\n"
                 << "3. FIM DE JOGO:\n"
                 << "   - VITORIA: Se descobrir todas as letras.\n"
                 << "   - DERROTA: Se atingir o limite de 6 erros.\n\n"
                 << "=========================================\n" << "\n";
            int sub_Escolha;

            do
            {
                cout << "Escolha uma das opcoes. 1 - Voltar  2 - sair : ";
                cin >> sub_Escolha;
                if(sub_Escolha == 1)
                {
                    limpa_Tela();
                    escolha = 0;
                }
                else if(sub_Escolha == 2)
                {
                    limpa_Tela();
                    cout << "Ate logo !!";
                    escolha = 3;
                }
                else
                {
                    cout << "Invalido " << "\n";
                    escolha = 0;
                }
            }
            while (sub_Escolha < 1 || sub_Escolha > 2 );


            break;
        case 3 :
            limpa_Tela();
            cout << "Ate logo !!";
            break;
        }
    }
    while(escolha < 1 || escolha > 3);
}

//////////////////////// MAIN //////////////////////////////////

int main()
{
    setlocale(LC_ALL, "Portuguese");

    menu_Inicial();


    return 0;
}
