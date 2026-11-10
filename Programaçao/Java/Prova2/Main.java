import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
       Scanner entrada = new Scanner(System.in);

        String nome;
        System.out.print("Digite o nome de funcionario: ");
        nome = entrada.nextLine();

        int numero;
        System.out.print("Digite o numero de funcionario: ");
        numero = entrada.nextInt();


        Gestor gestor = new Gestor(nome, numero, 'g');

      /* Exception */
        boolean teste = true;
      do{
        try {
            System.out.print("Digite o id do gestor : ");
            char id = entrada.next().charAt(0);
            gestor.imprimeDados(id);
            teste = false;
        } catch (IllegalArgumentException e) {
            System.out.println("Erro: " + e.getMessage());
        }
      }while(teste);
    }
}
