import java.io.PrintStream;
import java.util.Scanner;

public class Login {
  private String utilizador;
  private String pass ;


public Login (String utilizador, String pass) {
  this.utilizador = utilizador;
  this.pass = pass;
}

public void setPass (String pass) {
this.pass = pass;// Troca a pass do utilizador.
}

public boolean fazerLogin(String utilizador, String pass)
{
  try{
  if (!this.utilizador.equals(utilizador) || !this.pass.equals(pass) ){
    throw new Exception("Utilizador ou senha incorreta");
  } 
    return true ;
  }
    catch (Exception e){
      System.out.println("Erro");
      return false;
    }
}


/*
Deve receber os dados do utilizador e pass e compara-las com as da
classe. Caso sejam realmente iguais, deve retornar verdadeiro, ou então
deve lançar uma exceção com a informação de "utilizador ou pass
incorreta”. Tratar essa exceção dentro do próprio método imprimindo o
erro e retornar false. Exemplo:
try{
if([testar se utilizador incorreto]) {
// Forçar a exceção
throw new Exception(“Utilizador incorreto”);
}
} catch (Exception e) {
System.out.println(“Erro”);
}
*/
}