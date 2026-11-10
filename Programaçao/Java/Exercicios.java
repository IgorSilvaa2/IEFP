
package javaapplication2;

import java.io.PrintStream; //importa a classe printStream//
import java.io.UnsupportedEncodingException; // Importa a classe para tratar a exceção que //
import java.util.Scanner;

public class Aulas_java {
    public static void main(String[] args) throws UnsupportedEncodingException {
        // Define UTF-98 na janela do NetBeans
        System.setOut(new PrintStream(System.out, true, "UTF8"));

        Scanner entrada = new Scanner(System.in);
        String nome;
        int id;
        char situacao;

        System.out.print("Insira o seu ID : ");
        id = entrada.nextInt();
        System.out.println("O ID inserido foi: " + id);

        System.out.print("Insira o seu nome: ");
        entrada.nextLine(); // Limpa p Enter do t eclado que ficou da instrução acima.
        nome = entrada.nextLine();
        System.out.println("O nome inserido foi : " + nome);

        System.out.print("Insira sua situação profissional, d = desempregado, f = Em formação: ");
        situacao = entrada.nextLine().charAt(0);
        System.out.println("A situação inserida foi: " + situacao);

    }

}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Exercicio 1 le valores e testa uma candiçao sem if (operador ternario)

package javaapplication2;

import java.io.PrintStream; // importa a classe printStream//
import java.io.UnsupportedEncodingException; // Importa a classe para tratar a exceção que //
import java.util.Scanner;

public class Aulas_java {
    public static void main(String[] args) throws UnsupportedEncodingException {
        // Define UTF-98 na janela do NetBeans
        System.setOut(new PrintStream(System.out, true, "UTF8"));

        Scanner entrada = new Scanner(System.in);

        String nome, morada;
        int telefone, numerocc;
        float salariobruto, salarioliquido, salariomin;

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

        salariobruto = salariobruto >= salariomin ? salariobruto - salariobruto * 0.1f - salariobruto * 0.21f
                : salariobruto;

        System.out.println(nome + "\n" + morada + "\n" + telefone + "\n" + numerocc);
        System.out.println("O Salario é:" + salariobruto);

    }

}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Desenvolva um pequeno programa que verifique se um caracter que é passado ao
// programa(pode ultilizar uma variavel para simular esse caracter ) é maiusculo
// e se o for, avise o ultilizador de que o mesmo é mausculo;

package javaapplication2;

import java.io.PrintStream; // importa a classe printStream//
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

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// exercicio for JAVA

import java.util.*;
import java.io.PrintStream; // importa a classe printStream//
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

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 1) Escreva um programa Java que receba um número inteiro e imprima a sua
// tabuada. Exemplo 5 X 1 = 5, 5 X 2 = 10 ...

import java.util.*;
import java.io.PrintStream; // importa a classe printStream//
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      
      Scanner entrada = new Scanner(System.in);

      int numero,divisores = 0,soma=0;

      System.out.print("Digite um numero: ");
      numero = entrada.nextInt();

      System.out.print("Divisores do numero: ");

        for (int i =1; i<=numero; i++){
          if (numero % i == 0){
            divisores = i;
            soma += i;
            System.out.print(i + " ");
          } 
        } 
      System.out.print("\n" + "Soma dos numeros: " + soma);

        
      }
    }

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 2) Crie um programa que, dado um número inserido pelo utilizador, verifique
// quais são os seus divisores, imprimindo no ecrã a sua soma.

import java.util.*;
import java.io.PrintStream; // importa a classe printStream//
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      
      Scanner entrada = new Scanner(System.in);

      int numero,soma=0;

      do{
      System.out.print("Digite um numero: ");
      numero = entrada.nextInt();
      soma += numero;
      }
      while(numero != 0);
      System.out.print("Soma:" + soma); 
        
      }
    }

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 3) Crie um programa que realize a soma de números inteiros dados pelo
// utilizador, até ser inserido o número 0.

import java.util.*;
import java.io.PrintStream; // importa a classe printStream//
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner entrada = new Scanner(System.in);

        int [] vet = new int [10];
        int media = 0;

        for (int i =0; i<vet.length; i++){
        System.out.print("Digite o "+ (i+1)+ "° numero: ");
        vet [i] = entrada.nextInt();
        media = media+ vet[i];
        } 

        System.out.println(media/vet.length);
        System.out.println("vetor numeros: "+ Arrays.toString(vet));

        entrada.close();

        for(int n: vet){
        System.out.println("numero: " + n);
        }
        
      }
    }

/////////////////////STRINGS//////////////////////////////

/*
 * 1. Escreva um programa Java para obter o caracter no índice fornecido pelo
 * utilizador dentro da String
 */

import java.util.*;
import java.io.PrintStream; // importa a classe printStream//
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        String nome;
        int indice;

        System.out.printf("Digite um nome :");
        nome = entrada.nextLine();

        do {
            System.out.printf("Digite um numero de 1 a " + nome.length() + " :");
            indice = entrada.nextInt() - 1;
            if (indice >= 0 && indice <= nome.length() - 1) {
                System.out.print("O caracter do indice e: " + nome.charAt(indice));
            } else {
                System.out.print("O numero escolhido nao e permitido digite novamente! \n");
            }
        } while (indice > nome.length() || indice < 0);

    }
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*
 * 2. Escreva um programa Java para comparar duas strings recebidas do
 * utilizador.
 */

import java.util.*;
import java.io.PrintStream; // importa a classe printStream//
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner entrada = new Scanner(System.in);

        String nome,nome2;

        System.out.printf("Digite um nome :");
        nome = entrada.nextLine();

        System.out.printf("Digite um nome :");
        nome2 = entrada.nextLine();

        if ((nome.compareToIgnoreCase(nome2) == 0)){
          System.out.println("Sao o mesmo nome ");
        }else{
          System.out.println("Não sao iguais");
        }  
    }
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*
 * 3. Escreva um programa Java para concatenar uma determinada string no
 * final de outra string.
 */

import java.util.*;
import java.io.PrintStream; // importa a classe printStream//
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner entrada = new Scanner(System.in);

        String nome,nome2;

        System.out.printf("Digite um nome :");
        nome = entrada.nextLine();

        System.out.printf("Digite um nome :");
        nome2 = entrada.nextLine();

        System.out.println(nome.concat(" " + nome2)); 
    }
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*
 * 4. Escreva um programa Java para testar se uma determinada string contém a
 * sequência especificada de caracteres.
 */

import java.util.*;
import java.io.PrintStream; // importa a classe printStream//
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner entrada = new Scanner(System.in);

        String nome,nome2;

        System.out.printf("Digite um nome :");
        nome = entrada.nextLine();

        System.out.printf("Digite a letra para saber se existe na string :");
        nome2 = entrada.nextLine();

        if (nome.contains(nome2)){
          System.out.println("Exite o caracter " + nome2 +  " dentro da string");
        } else{
          System.out.println("Nao existe");
        }


    }
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*
 * 5. Escreva um programa Java para verificar se uma determinada string
 * termina com o conteúdo de outra string (utilize o método “endsWith()”
 */

import java.util.*;
import java.io.PrintStream; // importa a classe printStream//
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      Scanner entrada = new Scanner(System.in);

        String nome,nome2;

        System.out.printf("Digite um nome :");
        nome = entrada.nextLine();

        System.out.printf("Digite o segundo nome :");
        nome2 = entrada.nextLine();

        nome.toLowerCase();
        nome2.toLowerCase();

        if (nome.endsWith(nome2)){
          System.out.println("O primeiro nome nao termina com o segundo nome !");
        }else{
          System.out.println("O primeiro nao termina com o segundo nome ");
        }


    }
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*
 * 6. Escreva um programa para verificar se de entre 3 strings duas delas são
 * iguais.
 */

import java.util.*;
import java.io.PrintStream; // importa a classe printStream//
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        String nome, nome2, nome3;

        System.out.printf("Digite um nome :");
        nome = entrada.nextLine();

        System.out.printf("Digite o segundo nome :");
        nome2 = entrada.nextLine();

        System.out.printf("Digite o terceiro nome :");
        nome3 = entrada.nextLine();

        if (nome.equalsIgnoreCase(nome2) && nome.equalsIgnoreCase(nome3)) {
            System.out.println("Os 3 nomes sao iguais");
        } else {
            System.out.println("Os 3 nomes nao sao iguais ");
        }

    }
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// Métodos construtores - Exemplo
// GestaoPessoas.java

import java.io.PrintStream;
import java.io.UnsupportedEncodingException;

public class GestaoPessoas {

    public static void main(String[] args) throws UnsupportedEncodingException {
        System.setOut(new PrintStream(System.out, true,"UTF8"));
        //Declaração dos objetos
        Pessoa p1,p2;
        // Criação dos objetos
        p1 = new Pessoa("Pedro Silva","Av. da Liberdade",123456789,"ana.silva@email.pt",true);
        p2 = new Pessoa();
       
       
        // Preenchimento do objeto p2
        p2.nome = "José Costa";
        p2.morada ="Av. da Republica";
        p2.nif = 111222333;
        p2.email = "jose.costa@email.pt";
        p2.casado = false;
       
        System.out.println(p1.toString());

    }
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

package com.mycompany.gestaopessoas;

import java.io.PrintStream; // importa a classe printStream//
import java.io.UnsupportedEncodingException; // Importa a classe para tratar a exceção que //
import java.util.Scanner; // classe para ler 

public class GestaoPessoas {

    public static void main(String[] args) throws UnsupportedEncodingException {
        System.setOut(new PrintStream(System.out, true, "UTF8"));

        Scanner entrada = new Scanner(System.in);

        Pessoa p1 = new Pessoa();

        System.out.println("Digite o nome: ");
        p1.nome = entrada.nextLine();

        System.out.println("Digite a morada: ");
        p1.morada = entrada.nextLine();

        System.out.println("Digite o nif: ");
        p1.nif = entrada.nextInt();
        entrada.nextLine();

        System.out.println("Digite o email: ");
        p1.email = entrada.nextLine();

        System.out.println(p1.toString());
    }
}


// Classe Pessoa.java com this 

    /*public Pessoa(String nome, String morada, int nif, String email, boolean casado)
    {
        this.nome = nome;
        this.morada = morada;
        this.nif = nif;
        this.email = email;
        this.casado = casado;
    }*/

package com.mycompany.gestaopessoas;
public class Pessoa {
    String nome;
    String morada;
    String email;
    int nif;
    
    public String toString(){
        return ("Nome: " + nome +" \n" 
                + "Morada: " + morada + " \n" 
                + "Email: " + email + " \n" 
                + "Nif: " + nif + " \n");
    }
    
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>CLASSES E CONSTRUTORES E GET,SET>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
/*1. Escreva um modelo (classe) Empregado que represente um
empregado de uma empresa. Considere que os dados nome,
departamento, horasTrabalhadasNoMês e salárioPorHora devam ser
guardados e que devem ser implementadas as operações mostraDados
e calculaSalárioMensal;*/

/*2. Crie um método construtor, que possibilite a criação de um empregado
com todos os dados preenchidos;*/

/* 3. Ajuste o encapsulamento de acordo com as boas práticas e crie os
respetivos métodos “get” e “set”; */

/*4. Baseado no exercício do ponto 1, imagine que os empregados de uma
empresa tenham dois valores de salário para horas trabalhadas,
diferenciados entre horas normais e horas extras. Modifique a classe
Empregado para que os dois valores de horas trabalhadas e dois
valores de salário/hora sejam usados. */
/*5. Adicione o método calculaSalárioMensalBonus no modelo Empregado
(exercício do ponto 1) para que todos os empregados do
departamento Direção tenham 10% de bônus salarial. */
/* 6. Crie um método para mostrar todos os dados de um empregado.*/

/*4. Baseado no exercício do ponto 1, imagine que os empregados de uma
empresa tenham dois valores de salário para horas trabalhadas,
diferenciados entre horas normais e horas extras. Modifique a classe
Empregado para que os dois valores de horas trabalhadas e dois
valores de salário/hora sejam usados.*/
package com.mycompany.gestaopessoas;

import java.io.PrintStream; // importa a classe priantStream//
import java.io.UnsupportedEncodingException; // Importa a classe para tratar a exceção que //
import java.util.Scanner; // classe para ler 

public class GestaoPessoas {

    public static void main(String[] args) throws UnsupportedEncodingException {
        System.setOut(new PrintStream(System.out, true, "UTF8"));
        Scanner entrada = new Scanner(System.in);

        Empregado p1 = new Empregado("Igor", "direcao", 120, 16, 8, 32);
        

        p1.mostraDados();
        System.out.println("O salario mensal é : " + p1.calculaSalárioMensal());
        System.out.println("Salario de horas extras: " + p1.calculaHorasExtras());
        System.out.println("O salario com bonus mensal e: " + p1.calculaSalárioMensalBonus());

    }
}

//////CLASSE DO EXT 1 - 2 - 3 - 4 - 5 - 6//////

/*5. Adicione o método calculaSalárioMensalBonus no modelo Empregado
(exercício do ponto 1) para que todos os empregados do
departamento Direção tenham 10% de bônus salarial.*/
package com.mycompany.gestaopessoas;

public class Empregado {

    private String nome;
    private String departamento;
    private int horasTrabalhadasNoMês;
    private double salárioPorHora;
    private int horasExtras;
    private double salarioExtra;

    public Empregado(String nome, String departamento, int horasTrabalhadasNoMês, double salárioPorHora, int horasExtras, double salarioExtra) {
        this.nome = nome;
        this.departamento = departamento;
        this.horasTrabalhadasNoMês = horasTrabalhadasNoMês;
        this.salárioPorHora = salárioPorHora;
        this.horasExtras = horasExtras;
        this.salarioExtra = salarioExtra;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getDepartamento() {
        return departamento;
    }

    public void setDepartamento(String departamento) {
        this.departamento = departamento;
    }

    public int getHorasTrabalhadasNoMês() {
        return horasTrabalhadasNoMês;
    }

    public void setHorasTrabalhadasNoMês(int horasTrabalhadasNoMês) {
        this.horasTrabalhadasNoMês = horasTrabalhadasNoMês;
    }

    public double getSalárioPorHora() {
        return salárioPorHora;
    }

    public void setSalárioPorHora(double salárioPorHora) {
        this.salárioPorHora = salárioPorHora;
    }

    public void mostraDados() {
        System.out.println("Nome: " + this.nome);
        System.out.println("Departamento: " + this.departamento);
        System.out.println("horasTrabalhadasNoMês: " + this.horasTrabalhadasNoMês);
        System.out.println("salárioPorHora: " + this.salárioPorHora);
    }

    public double calculaSalárioMensal() {
        double calculo = this.horasTrabalhadasNoMês * this.salárioPorHora;
        return calculo;
    }

    public double calculaHorasExtras() {
        double calculoExtra = this.horasExtras * this.salarioExtra;
        return calculoExtra;
    }

    public double calculaSalárioMensalBonus() {
        double salarioBase = calculaSalárioMensal();
        if (this.departamento.equalsIgnoreCase("direção") || this.departamento.equalsIgnoreCase("direcao")) {
            System.out.println("O Bonus é: " + salarioBase * 0.10);
            return salarioBase + (salarioBase * 0.10);
        }
        return salarioBase;

    }
}

 /*Atividade 5 – Herança, Polimorfismo e Encapsulamento

1. Escreva um programa em JAVA que permita guardar os dados de funcionários externos e internos
da empresa:
Nota: Faça uso das principais propriedades da POO, tais como, Herança, Polimorfismo e
Encapsulamento, usando-as adequadamente.
a. Crie uma classe Pessoa com métodos chamados getPrimeiroNome() e getUltimoNome()
e os atributos genéricos de uma pessoa.
b. Crie uma subclasse chamada funcInterno que adicione um novo método chamado
getIdEmpregado() e substitua o método geUltimoNome() para incluir também o cargo do
funcionário.
c. Crie uma classe que descreva um funcionário externo (funcExterno) que contenha apenas
os atributos código e tipo de serviço prestado. */

