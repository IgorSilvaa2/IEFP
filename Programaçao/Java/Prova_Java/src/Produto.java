public class Produto {
    private String titulo;
    private double precoBase;

    public Produto(String titulo, double precoBase) {
        this.precoBase = precoBase;
        this.titulo = titulo;
    }

    public String getTitulo() {

        return titulo;
    }

    public void setTitulo  (String titulo) {
        this.titulo = titulo;
    }

    public double getPrecoBase () {

        return precoBase;
    }

    public void setPrecoBase(double precoBase) {

        this.precoBase = precoBase;
    }


    public double calculaPrecoFinal() {
        return precoBase;
    }

}
