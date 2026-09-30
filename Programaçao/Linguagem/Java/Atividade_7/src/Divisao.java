import java.util.Scanner;

public class Divisao {
    Scanner entrada = new Scanner(System.in);
    boolean condicao = true;

    public void condicao() {
        this.condicao = condicao;
        do {

            try {

                System.out.print("Digite um numero: ");
                int i = entrada.nextInt();

                System.out.print("Digite outro numero: ");
                int j = entrada.nextInt();

                i = i / j;
                condicao = false;
            } catch (ArithmeticException e) {
                System.out.println("Não pode dividir por zero, insira um valor diferente de zero. ");
            }
        } while (condicao);
    }
}
