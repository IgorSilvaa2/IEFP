//Subclasse Funcionário Externo
package projeto_java;

public class funcExterno extends Pessoa {

    public int codigo;
    public String servico;

public funcExterno(String primeiroNome, String ultimoNome, String morada, String email, int nif, Boolean casado, int codigo, String servico) {
        super(primeiroNome, ultimoNome, morada, email, nif, casado); // Chama o construtor da classe pai (Pessoa)
        this.codigo = codigo;
        this.servico = servico;
    }
    public int getCodigo() {
        return codigo;
    }
    public String getServico() {
        return servico;
    }
    @Override
    public void exibirDados() {
        super.exibirDados();
        System.out.printf("\n\tTipo: Funcionário Externo", "\n\tCódigo: " + codigo, "\n\tServiço: " + servico);
    }
}