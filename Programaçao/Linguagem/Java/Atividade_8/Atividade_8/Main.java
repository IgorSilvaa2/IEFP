import java.util.*;
import java.io.UnsupportedEncodingException;
import java.io.PrintStream;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws UnsupportedEncodingException {
      System.setOut(new PrintStream(System.out, true, "UTF8"));
      Scanner entrada = new Scanner(System.in);

      
      System.out.println("Cadastre seu login !!");

      System.out.print("Digite o usuario : ");
      String utilizador = entrada.nextLine();

      System.out.print("Digite a senha : ");
      String senha = entrada.nextLine();

      Login Cadastro = new Login (utilizador,senha);

      System.out.print("Digite o login : ");
      String login = entrada.nextLine();

      System.out.print("Digite a senha : ");
      String pass = entrada.nextLine();

      boolean logado = Cadastro.fazerLogin(login,pass);
       if (logado) {
            System.out.println("Login efetuado com sucesso! Bem-vindo.");
        }
      entrada.close();

    }
}