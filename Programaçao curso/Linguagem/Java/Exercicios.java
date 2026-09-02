
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
        
        System.out.print("Insira sua situação profissional, d = desempregado, f = Em formação: ");
        situacao = entrada.nextLine().charAt(0);
        System.out.println("A situação inserida foi: "+ situacao);
        
    }
    
}


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Exercicio 1 le valores e testa uma candiçao sem if (operador ternario)


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
        float salariobruto,salarioliquido,salariomin;
        
        
        System.out.print("Digite o seu nome: ");
        nome = entrada.nextLine();
        
        System.out.print("Digite o seu Morada: ");
        morada = entrada.nextLine();
        
        System.out.print("Digite o seu Telefone: ");
        telefone = entrada.nextInt();

        System.out.print("Digite o seu Numero do CC: ");
        numerocc = entrada.nextInt();
        
        System.out.print("Digite o seu salaraio bruto para saber o valor liquido: ");
        salariobruto = entrada.nextFloat();
        
        System.out.print("Qual e o salario minimo?: ");
        salariomin = entrada.nextFloat();
        
        salariobruto = salariobruto >= salariomin ? salariobruto - salariobruto * 0.1f  - salariobruto * 0.21f : salariobruto;
        
        System.out.println(nome + "\n" + morada + "\n" + telefone + "\n" + numerocc);
        System.out.println("O Salario é:" + salariobruto );

        
    }
    
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//Desenvolva um pequeno programa que verifique se um caracter que é passado ao programa(pode ultilizar uma variavel para simular esse caracter ) é maiusculo e se o for, avise o ultilizador de que o mesmo é mausculo;

package javaapplication2;

import java.io.PrintStream; //importa a classe printStream//
import java.io.UnsupportedEncodingException; // Importa a classe para tratar a exceção que //
import java.util.Scanner;

public class Aulas_java {

    public static void main(String[] args) throws UnsupportedEncodingException {
        //Define UTF-98 na janela do NetBeans
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

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// exercicio for JAVA 

import java.util.*;
import java.io.PrintStream; //importa a classe printStream//
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        //Define UTF-98 na janela do NetBeans
        Scanner entrada = new Scanner(System.in);

      int numero;
      System.out.print("Digite um numero para tabuada : ");
      numero = entrada.nextInt();

      for (int i = 0; i<10; i++) {
        System.out.printf(numero + " x " + (i+1) + " = " + (numero *(i+1)));
        System.out.print("\n");
      }
      
    }
}
