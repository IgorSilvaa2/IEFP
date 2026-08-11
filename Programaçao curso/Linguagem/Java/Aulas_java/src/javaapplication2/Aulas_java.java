
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
        bool condicao;
        
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
        
        salarioliquido = (salariobruto > salariomin)? salarioliquido = (salariobruto * 0.1f ) + (salariobruto * 0.21f);
        System.out.println("O Salario liquido é:" + (salariobruto  - salarioliquido));
        
        System.out.println(nome + "\n" + morada + "\n" + telefone + "\n" + numerocc);

        
    }
    
}
