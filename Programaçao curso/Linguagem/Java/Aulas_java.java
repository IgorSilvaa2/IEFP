
package javaapplication2;

import java.io.PrintStream; //importa a classe printStream//
import java.io.UnsupportedEncodingException; // Importa a classe para tratar a exceção que //
import java.util.Scanner;

public class Aulas_java {
    public static void main(String[] args)throws UnsupportedEncodingException {
        //Define UTF-98 na janela do NetBeans
        System.setOut(new PrintStream(System.out,true,"UTF8"));
        
        Scanner entrada = new Scanner(System.in);
        String nome;
        int id;
        char situacao;
        
        System.out.print("Insira o seu ID : ");
        id = entrada.nextInt();
        System.out.println("O ID inserido foi: " + id);
        
        System.out.print("Insira o seu nome: ");
        entrada.nextLine(); //Limpa p Enter do t eclado que ficou  da instrução acima.
        nome = entrada.nextLine();
        System.out.println("O nome inserido foi : " + nome);
        
        System.out.print("Insira sua situação profissional, d = desempregado. f = Em formação");
        situacao = entrada.nextLine();
        

        
        
        
    }
    
}
