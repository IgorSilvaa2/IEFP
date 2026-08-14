
package javaapplication2;

import java.io.PrintStream; //importa a classe printStream//
import java.io.UnsupportedEncodingException; // Importa a classe para tratar a exceção que //
import java.util.Scanner;

public class Aulas_java {
    public static void main(String[] args)throws UnsupportedEncodingException {
        //Define UTF-98 na janela do NetBeans
        System.setOut(new PrintStream(System.out,true,"UTF8"));
        
        Scanner entrada = new Scanner(System.in);
        
        char c;
        
        System.out.print("Digite uma letra: ");
        c = entrada.nextLine().charAt(0); 
        
        if (c >= 65 && c <= 90){
            System.out.print("A letra e Maiuscula ! : " + c + "\n");
            System.out.print("A mesma letra minuscula ! : " + (char)(c + 32) + "\n");
        }else{
            System.out.print("A letra e Minuscula ! : " + c + "\n");
                        System.out.print("A letra e Minuscula ! : " + (char)(c-32) + "\n");

        }
    }
}