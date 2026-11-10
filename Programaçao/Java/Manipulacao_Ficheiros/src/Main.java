import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
import java.util.InputMismatchException;

class RegistoAluno {
    public void criaFicheiro(){
        try (FileWriter fw = new FileWriter("aluno.txt")) {
            fw.write("Igor;");
            fw.write("Turma A; ");
            fw.write("Programacao ");
            System.out.println("Ficheiro Criado e dados salvos.");
        } catch (IOException e) {
            System.out.println("Ocorreu um erro " + e.getMessage());
        }
    }
}

class ConsultarAluno {
    public void lerFicheiro() {
        try (BufferedReader leitor = new BufferedReader(new FileReader("aluno.txt"))) {
            String linha;
            while ((linha = leitor.readLine()) != null) {
                System.out.print(linha);
            }
            System.out.print("\n");
        } catch (IOException e) {
            System.out.println("Erro ao ler o ficheiro: " + e.getMessage());
        }
    }
}

class AtualizarAluno {
    public void atualizar(Scanner entrada) {
        System.out.print("Digite a disciplina preferida: ");
        String disciplinaPreferida = entrada.nextLine();

        System.out.print("Digite a classificação: ");
        int classificacao = entrada.nextInt();
        while(classificacao < 0 || classificacao > 20){
            System.out.print("classificacao INVALIDA  digite novamente: ");
            classificacao = entrada.nextInt();
            }
            entrada.nextLine();

        System.out.print("Digite a data de realização: ");
        String realizacao = entrada.nextLine();

        try (BufferedWriter escritor = new BufferedWriter (new FileWriter("aluno.txt", true))){
            escritor.write(disciplinaPreferida + " ");
            escritor.newLine();

            escritor.write(String.valueOf("\n" + classificacao));
            escritor.newLine();

            escritor.write("\n" + realizacao);
            escritor.newLine();
            System.out.println("Ficheiro criado e dados guardados.");
        } catch(Exception e) {
            System.out.println("Ocorreu um erro: " + e.getMessage());
            return;
        }
        
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
   
        RegistoAluno registrar = new RegistoAluno();
        registrar.criaFicheiro();

        AtualizarAluno atualizar = new AtualizarAluno();
        atualizar.atualizar(entrada);

        ConsultarAluno consultar = new ConsultarAluno();
        consultar.lerFicheiro();



    }
}
