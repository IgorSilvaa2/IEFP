public class MinhaExcecao extends Exception { // Cria uma exceção personalizada do tipo "checked" (verificada)
}

public class TesteExcecao {
    public static void teste() throws MinhaExcecao { // Declara que o método pode lançar a exceção MinhaExcecao
        throw new MinhaExcecao();
    }
    
    public static void main(String[] args) {
        MinhaExcecao me = null; // Inicializa uma variável de referência para a exceção com valor nulo
        try
        {
            System.out.println("try "); // Imprime "try " e entra no fluxo monitorado
            teste(); // Chama o método que lança a exceção, interrompendo o bloco try
        } catch (MinhaExcecao e) // Captura a exceção do tipo MinhaExcecao que foi lançada no bloco try
        {
            System.out.println("catch "); // Imprime "catch ", confirmando que a exceção foi tratada
            me = e; // Guarda a referência da exceção capturada na variável 'me'
        } finally {
            System.out.println("finally "); // O bloco finally sempre executa, independentemente de ter ocorrido erro ou não
        }
        
        System.out.println("fim"); // O fluxo continua normalmente após o tratamento do erro, imprimindo "fim"
    }
}
