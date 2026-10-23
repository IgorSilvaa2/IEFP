
import java.io.FileWriter;
import java.io.IOException;

public class RegistoAluno {
    public static void main(String[] args) throws Exception {
        try (FileWriter fw = new FileWriter("aluno.txt")) {
            fw.write("Igor\n");
            fw.write("Turma A\n");
            fw.write("Programacao\n");
            System.out.println("Ficheiro Criado e dados salvos.");
        } catch (IOException e) {
            System.out.println("Ocorreu um erro " + e.getMessage());
        }
    }
}
