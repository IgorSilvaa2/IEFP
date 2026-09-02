package javaapplication2;

import java.io.PrintStream; //importa a classe printStream//
import java.io.UnsupportedEncodingException; // Importa a classe para tratar a exceção que //
import java.util.Scanner;

public class Aulas_java {

    public static void main(String[] args) throws UnsupportedEncodingException {
        // Define UTF-98 na janela do NetBeans
        System.setOut(new PrintStream(System.out, true, "UTF8"));

        Scanner entrada = new Scanner(System.in);

        char c;

        System.out.print("Digite uma letra: ");
        c = entrada.nextLine().charAt(0);

        if (c >= 65 && c <= 90) {
            System.out.print("O caracter " + c + " e maiuscula !" + "\n");
            System.out.print("A mesma letra minuscula : " + (char) (c + 32) + "\n");
            for (int i = c; i <= 90; i++) {
                System.out.print((char) i + " - ");
            }
        } else {
            System.out.print("O caracter " + c + " e minusculo !" + c + "\n");
            System.out.print("A letra e Minuscula ! : " + (char) (c - 32) + "\n");
            for (int i = c; i <= 122; i++) {
                System.out.print((char) i + " - ");
            }
        }
        System.out.print("\n");
        for (int i = 65; i <= 90; i++) {
            System.out.print((char) i + " - ");
        }
        System.out.print("\n");
        for (int i = 65; i <= 90; i++) {
            System.out.print((char) (i + 32) + " - ");
        }

    }
}
