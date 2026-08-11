
package javaapplication2;

import java.io.PrintStream; //importa a classe printStream//
import java.io.UnsupportedEncodingException; // Importa a classe para tratar a exceção que //
import java.util.Scanner;

public class Aulas_java {
    public static void main(String[] args)throws UnsupportedEncodingException {
        //Define UTF-98 na janela do NetBeans
        System.setOut(new PrintStream(System.out,true,"UTF8"));
        
        Scanner entrada = new Scanner(System.in);
        
        String nome,morada;
        int telefone,numerocc;
        
        System.out.print("Digite o seu nome: ");
        nome = entrada.nextLine();
        
        System.out.print("Digite o seu Morada: ");
        morada = entrada.nextLine();
        
        System.out.print("Digite o seu Telefone: ");
        telefone = entrada.nextInt();

        System.out.print("Digite o seu Numero do CC: ");
        numerocc = entrada.nextInt();
        
        System.out.println(nome + "\n" + morada + "\n" + telefone + "\n" + numerocc);

        
    }
    
}
