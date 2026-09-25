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

public class Pessoa {

        private String nome = "Igor";
        private String Endereço;
        private int idade;
        private int nif;
        
        public String getPrimeiroNome(){
            return nome.split(" ")[0];
        }
}
