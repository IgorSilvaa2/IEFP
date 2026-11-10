public class LivroFisico extends Produto {

    public LivroFisico(String titulo, double precoBase) {
        super(titulo, precoBase);
    }

    @Override
    public double calculaPrecoFinal() {
        return super.calculaPrecoFinal() + 5.00;
    }
}
