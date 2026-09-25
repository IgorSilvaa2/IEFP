package projeto_java;

import java.io.PrintStream; // importa a classe priantStream//
import java.io.UnsupportedEncodingException; // Importa a classe para tratar a exceção que //
import java.util.Scanner; // classe para ler 

public class projeto_Java {

    public static void main(String[] args) throws UnsupportedEncodingException {
        System.setOut(new PrintStream(System.out, true, "UTF8"));
        
        Veiculo p1 = new Veiculo("Honda");
        Carro meuCarro = new Carro("Ford", "Mustang");
        
        System.out.println(p1.marca);
        meuCarro.buzinar();
    }
}
