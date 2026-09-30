package projeto_java;

public class Veiculo {

    public String marca;
// Construtor da superclasse

    public Veiculo(String marca) {
        this.marca = marca;
    }

    public void buzinar() {
        System.out.println("O veículo emitiu um som: Bi-bi!");
    }
}
