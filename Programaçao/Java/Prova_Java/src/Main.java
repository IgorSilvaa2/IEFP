import java.io.PrintStream;
import java.io.UnsupportedEncodingException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws UnsupportedEncodingException {
        System.setOut(new PrintStream(System.out, true, "UTF8"));
        Scanner entrada = new Scanner(System.in);


        LivroFisico livro = new LivroFisico("Java para inicantes", 30);
        Ebook ebook1 = new Ebook("Clean Code Ebook", 20);

        ebook1.setPrecoBase(25.0);

        Produto[] listaProdutos = {livro, ebook1} ;

        for (Produto lista : listaProdutos) {
            System.out.println(" Titulo: " + lista.getTitulo() + " \n Preço Final: " + lista.calculaPrecoFinal());
        }


    }
}
