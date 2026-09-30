import java.io.PrintStream; // importa a classe priantStream//
import java.io.UnsupportedEncodingException; // Importa a classe para tratar a exceção que //
import java.util.Scanner; // classe para ler

public class Atividade_7 {
    static void main(String[] args) throws UnsupportedEncodingException {
        System.setOut(new PrintStream(System.out, true, "UTF8"));
        Scanner entrada = new Scanner(System.in);

        Divisao p = new Divisao();
        Vetor p2 = new Vetor();

        p.condicao();
        p2.lerVetor();

    }
}



