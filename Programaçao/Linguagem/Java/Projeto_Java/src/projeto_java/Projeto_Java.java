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

package projeto_java;

import java.io.PrintStream; // importa a classe priantStream//
import java.io.UnsupportedEncodingException; // Importa a classe para tratar a exceção que //
import java.util.Scanner; // classe para ler 

public class Projeto_Java {

    public static void main(String[] args) throws UnsupportedEncodingException {
        System.setOut(new PrintStream(System.out, true,"UTF8"));
        //Declaração dos objetos
        // Criar instâncias das subclasses
        funcInterno func1 = new funcInterno("Igor", "Silva", "Sao Cristovao", "boxigor@gmail.com",01234567 , true, 12345, "Silva", "TI");
        funcExterno func2 = new funcExterno("Igor", "Silva", "Sao Cristovao", "boxigor@gmail.com", 01234567, false, 67891, "aplicação");

        // Exibir os dados de cada um
        System.out.println("--- Dados dos Funcionários ---");
        func1.exibirDados();
        System.out.printf("\n----------------------------------");
        func2.exibirDados();
        System.out.printf
        ("\n----------------------------------");
        }
      }
        
