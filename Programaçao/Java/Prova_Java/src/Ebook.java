public class Ebook extends Produto {
    public Ebook(String titulo, double precoBase) {

        super(titulo, precoBase);
    }

    @Override
    public double calculaPrecoFinal() {
        return super.calculaPrecoFinal() * 0.90;
    }
}
