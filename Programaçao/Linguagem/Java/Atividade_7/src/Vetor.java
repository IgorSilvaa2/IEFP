import java.util.InputMismatchException;
import java.util.Scanner;

public class Vetor {
    Scanner entrada = new Scanner(System.in);
    int[] vet = new int[10];

    public void lerVetor() {
        boolean condicao = true;
        do {

            try {

                for (int i = 0; i <= vet.length; i++) {
                    System.out.println("Digite o " + (i + 1) + " Valor :");
                    vet[i] = entrada.nextInt();
                }
                condicao = false;
            } catch (InputMismatchException e) {
                System.out.println("O valor deve ser numerico !");
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("Valores acima de 10 posiçoes !");
            }
        } while (condicao);

    }
}
