public class Gestor extends Funcionario {

 private char idGestor;

  /*Metodo Construtor*/
 public Gestor(String nome, int numero, char idGestor) {
  super(nome, numero);
  this.idGestor = idGestor;
 }

 /*Get e Set*/ 
 public char getIdGestor() {
  return idGestor;
 }

 public void setIdGestor(char idGestor) {
  this.idGestor = idGestor;
 }

 @Override
 public void imprimeDados() {
  super.imprimeDados();
  System.out.println("ID do gestor: " + idGestor);
 }

 public void imprimeDados(char id) {
  if (id != 'g' && id != 'G') {
   throw new IllegalArgumentException("O carácter esta incorreto");
  }
  imprimeDados();
 }
}