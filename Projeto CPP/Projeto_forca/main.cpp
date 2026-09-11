#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <vector>
#include <ios>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <clocale>
#include <vector>    // necessario para criar o struct, fun��o do ranking
#include <algorithm> // necessario para utilizar sort() para ordenar as pontua��es
using namespace std;

/////////////////////// FUNCAO GUARDAR RANKING //////////////////////////////
// fun��o para a cria��o do ranking, assim, o struct permite guardar essas duas informa��es juntas.
struct Jogador
{
    string nome;
    int pontuacao;
};

void mostrarRanking()
{
    ifstream ficheiro("historico.txt");
    if (!ficheiro.is_open())
    {
        cout << "\nNao foi possivel abrir o historico.\n";
        return;
    }

    vector<Jogador> ranking;

    string nome;
    string dificuldade;
    string palavra;
    string pontosTexto;
    string resultado;

    // O programa vai ler at� encontrar ;
    while (getline(ficheiro, nome, ';')) // getline = ler uma sequ�ncia de caracteres e guardar essa informa��o numa string.
    {
        getline(ficheiro, dificuldade, ';');
        getline(ficheiro, palavra, ';');
        getline(ficheiro, pontosTexto, ';');
        getline(ficheiro, resultado);

        if (resultado == "Ganhou")
        {
            Jogador jogador;

            jogador.nome = nome;
            jogador.pontuacao = stoi(pontosTexto); // stoi (string to integer)= transformar texto num n�mero inteiro.

            ranking.push_back(jogador); // colocar no final do vector
        }
    }

    ficheiro.close();

    // organizar do maior n�mero de pontos para o menor
    sort(ranking.begin(), ranking.end(),
         [](const Jogador &a, const Jogador &b)
         {
             return a.pontuacao > b.pontuacao;
         });

    cout << "\n";
    cout << "              RANKING\n";
    cout << "=========================================\n\n";

    if (ranking.empty())
    {
        cout << "Ainda nao existem partidas ganhas.\n";
        return;
    }

    for (size_t i = 0; i < ranking.size(); i++)
    {
        cout << i + 1 << " - "
             << ranking[i].nome
             << " | "
             << ranking[i].pontuacao
             << " pontos\n";
    }

    cout << "\n=========================================\n";
}
/////////////////////// FUNCAO GUARDAR PARTIDA //////////////////////////////

void guardarPartida(
    const string &nome,
    const string &dificuldade,
    const string &palavra,
    int pontos,
    const string &resultado)
{
    ofstream ficheiro("historico.txt", ios::app);

    if (ficheiro.is_open())
    {
        ficheiro << nome << ";"
                 << dificuldade << ";"
                 << palavra << ";"
                 << pontos << ";"
                 << resultado << "\n";
    }

    ficheiro.close();
}

/////////////////////// FUNCAO LIMPA TELA ///////////////////////////////////

void limpa_Tela()
{
    system("CLS");
}
/////////////////////// FUNCAO INPUT STRING ///////////////////////////////////
void inputNomes(const string& a)
{
    ofstream ficheiro("inputNomes.txt", ios::app);

    if (ficheiro.is_open())
    {
        ficheiro << a << "\n";
    }

    ficheiro.close();
}

void jogo (const string *palavraSecreta, string categoria)
{
    string letrasCertas = "";
    string letrasErradas = "";

    char letra;

    while (true)
    {
        for (size_t i = 0; i < palavraSecreta->size(); i++)
        {
            if (letrasCertas.find((*palavraSecreta)[i]) != string::npos)
            {
                cout << (*palavraSecreta)[i] << " ";
            }
            else
            {
                cout << "_ ";
                ganhou = false;
            }
        }

        cout << "\nDigite uma letra: ";
        cin >> letra;

        letra = toupper(letra);

        if (letrasCertas.find(letra) != string::npos ||
                letrasErradas.find(letra) != string::npos)
        {
            cout << "\nEssa letra ja foi usada!\n";
            continue;
        }

        ////////////////////// PROCURAR LETRA ////////////////////////////////

        bool encontrou = false;
        for (size_t i = 0; i < palavraSecreta->size(); i++)
        {
            if ((*palavraSecreta)[i] == letra)
            {
                encontrou = true;
            }
        }

        ////////////////////// ATUALIZAR JOGO ////////////////////////////////

        if (encontrou)
        {
            letrasCertas += letra;
        }
        else
        {
            letrasErradas += letra;
        }

        ////////////////////// LIMPAR ECRAN //////////////////////////////////

        limpa_Tela();
        cout << "A sua palavra e um " << categoria
             << " e tem " << palavraSecreta->size()
             << " letras\n";
        cout << "Certas: " << letrasCertas << " \n";
        cout << "Erradas: " << letrasErradas << " \n";

    }


}


//////////////////////// FUNCAO MENU DIFICULDADDE //////////////////////////////////

void menu_Dificuldade()
{

    const string facil [10] = {"GATO", "CAO", "LEAO", "PATO", "RATO", "LOBO", "URSO", "VACA", "SAPO", "AVES"};
    const string medio[10]= {"GUITARRA", "ESPELHO", "COMPUTADOR", "MOCHILA", "CADERNO", "TELEFONE", "CARTEIRA", "LANTERNA", "RELOGIO", "MARTELO"};
    const string dificil [10]= {"OTORRINOLARINGOLOGISTA", "PSICOLOGO", "ARQUEOLOGIA", "PROGRAMADOR", "ENGENHEIRO", "ASTRONAUTA", "NUTRICIONISTA", "NEUROCIENTISTA", "EMPREENDEDOR", "FARMACEUTICO"};


    cout << "\n 1 - Facil";
    cout << "\n 2 - Medio";
    cout << "\n 3 - Dificil \n";

    int dificuldade;

    do
    {
        cout << "Escolha uma opcao : ";
        cin >> dificuldade ;
        if(dificuldade == 1)
        {
            int aleatorio = rand() % 10;
            const string *palavraEscolhida = &facil[aleatorio];
            cout << "A sua palavra e um animal e tem " << palavraEscolhida->size() << " letras \n";
            jogo(palavraEscolhida, "animal");
        }

        ////////////////////// DIFICULDADE MEDIA ////////////////////////////

        else if (dificuldade == 2)
        {
            int aleatorio = rand() % 10;
            const string *palavraEscolhida = &medio[aleatorio];
            cout << "A sua palavra e um objeto e tem " << palavraEscolhida->size() << " letras \n";
            jogo(palavraEscolhida, "objeto");

        }

        ////////////////////// DIFICULDADE DIFICIL //////////////////////////

        else if (dificuldade == 3)
        {
            int aleatorio = rand() % 10;
            const string *palavraEscolhida = &dificil[aleatorio];
            cout << "A sua palavra e uma profissao e tem " << palavraEscolhida->size() << " letras \n";
            jogo(palavraEscolhida, "profissao");
        }

        ////////////////////// OPCAO INVALIDA ///////////////////////////////

        else
        {
            cout << "Opcao invalida ! \n";
        }
    }
    while(dificuldade <1 || dificuldade > 3);


}
////////////////////////// FUNCAO MENU ////////////////////////////////
void menu_Inicial()
{
    string nome;
    int escolha;

    ////////////////////// PEDIR NOME ///////////////////////////////////////

    cout << "Digite o seu nome: ";

    getline(cin, nome);
    inputNomes(nome);

    ////////////////////// MENU PRINCIPAL ///////////////////////////////////

    do
    {
        cout << "============================================================================================\n"

             << "   _  ___   ____  ___    ____   _      _____ ___  ____   ____   _         +---+\n"
             << "  | |/ _ \\ / ___|/ _ \\  |  _ \\ / \\    |  ___/ _ \\|  _ \\ / ___| / \\        |   |\n"
             << "  | | | | | |  _| | | | | | | / _ \\   | |_ | | | | |_) | |    / _ \\       O   |\n"
             << "  | | |_| | |_| | |_| | | |_/ / ___ \\  |  _|| |_| |  _ <| |___/ ___ \\    /|\\  |\n"
             << " _/ |\\___/ \\____|\\___/  |____/_/   \\_\\ |_|   \\___/|_| \\_\\\\____/_/   \\_\\  / \\  |\n"
             << "|__/                                                                          |\n"
             << "============================================================================================\n\n";

        cout << "Escolha uma opcao!";
        cout << "\n";
        cout << "\n1 - Jogar";
        cout << "\n2 - Regras";
        cout << "\n3 - Ranking";
        cout << "\n4 - Sair";
        cout << "\n=========================================\n";

        cin >> escolha;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        ////////////////////// SWITCH ///////////////////////////////////////

        switch (escolha)
        {

            ////////////////////// JOGAR ////////////////////////////////////////

        case 1:

            limpa_Tela();

            cout << "=========================================================================\n"
                 << "  ____  _____ __  __     __     ___ _   _ ____   ___  _ _ _ \n"
                 << " | __ )| ____|  \\/  |    \\ \\   / / | \\ | |  _ \\ / _ \\| | | |\n"
                 << " |  _ \\|  _| | |\\/| |     \\ \\ / /| |  \\| | | | | | | | | | |\n"
                 << " | |_) | |___| |  | |      \\ V / | | |\\  | |_| | |_| |_|_|_|\n"
                 << " |____/|_____|_|  |_|       \\_/  |_|_| \\_|____/ \\___/(_|_|_)\n"
                 << "=========================================================================\n\n";

            menu_Dificuldade(nome);

            break;

            ////////////////////// REGRAS ///////////////////////////////////////

        case 2:

            limpa_Tela();
            cout << "\n";

            cout << "=========================================\n"
                 << "         REGRAS DO JOGO DA FORCA\n"
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

                 << "=========================================\n\n";

            int sub_Escolha;

            do
            {
                cout << "Escolha uma das opcoes.\n";
                cout << "1 - Voltar\n";
                cout << "2 - Sair\n";
                cout << "Opcao: ";

                cin >> sub_Escolha;

                if (sub_Escolha == 1)
                {
                    limpa_Tela();
                    escolha = 0;
                }
                else if (sub_Escolha == 2)
                {
                    limpa_Tela();
                    cout << "Ate logo!!\n";
                    escolha = 4;
                }
                else
                {
                    cout << "Invalido!\n";
                    escolha = 0;
                }
            } while (sub_Escolha < 1 || sub_Escolha > 2);

            break;

            ////////////////////// MOSTRAR RANKING ///////////////////////////////

        case 3:

            limpa_Tela();
            mostrarRanking();
            cout << "\nPressione Enter para voltar ao menu.";
            cin.get();
            limpa_Tela();
            escolha = 0;
            break;

            ////////////////////// SAIR //////////////////////////////////////////

        case 4:

            limpa_Tela();
            cout << "Ate logo!!\n";
            break;

            ////////////////////// OPCAO INVALIDA ////////////////////////////////

        default:

            limpa_Tela();
            cout << "Opcao invalida!\n";
            break;
        }

    } while (escolha < 1 || escolha > 4);
}

//////////////////////// MAIN ///////////////////////////////////////////////

int main()
{
    int *aleatorio;
    setlocale(LC_ALL, "Portuguese");

    menu_Inicial();

    return 0;
}
