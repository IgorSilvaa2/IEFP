package projeto_java;

public class Carro extends Veiculo {

    public String modelo;

    public Carro(String marca, String modelo) {
        super(marca);
        this.modelo = modelo;
    }

    @Override
    public void buzinar() {
        super.buzinar();
        System.out.println("O carro também piscou os faróis!");
    }

}
