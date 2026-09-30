/*1. Escreva um programa em JAVA que permita guardar os dados de funcionários externos e internos
da empresa:
Nota: Faça uso das principais propriedades da POO, tais como, Herança, Polimorfismo e
Encapsulamento, usando-as adequadamente.
a. Crie uma classe Pessoa com métodos chamados getPrimeiroNome() e getUltimoNome()
e os atributos genéricos de uma pessoa.
b. Crie uma subclasse chamada funcInterno que adicione um novo método chamado
getIdEmpregado() e substitua o método geUltimoNome() para incluir também o cargo do
funcionário.
c. Crie uma classe que descreva um funcionário externo (funcExterno) que contenha apenas
os atributos código e tipo de serviço prestado.

*///Subclasse Funcionário Interno
package projeto_java;

public class funcInterno extends Pessoa {

    private int idEmpregado;
    private String UNome;
    public String cargo;

    public funcInterno(String primeiroNome, String ultimoNome, String morada, String email, int nif, Boolean casado, int idEmpregado, String UNome, String cargo){
        super(primeiroNome, ultimoNome, morada, email, nif, casado);
        this.idEmpregado = idEmpregado;
        this.UNome = UNome;
        this.cargo = cargo;
    }
    public String getUNome() {
        return UNome + "\nCargo: " + cargo;
    }

    public void setUNome(String UNome) {
        this.UNome = UNome;
    }

    public int getIdEmpregado() {
        return idEmpregado;
    }

    public void setIdEmpregado(int idEmpregado) {
        this.idEmpregado = idEmpregado;
    }

    @Override
    public void exibirDados() {
        super.exibirDados();
        System.out.printf("\n\tTipo: Funcionário Interno\n", "\n\tID Empregado: " + idEmpregado, "\n\tÚltimo nome: " + UNome, "\n\tCargo: " + cargo);
    }
}
