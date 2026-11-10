public class Funcionario {

 private String nome;
 private int numero;

  /*Metodo Construtor*/
 public Funcionario(String nome, int numero) {
  this.nome = nome;
  this.numero = numero;
 }

 /*Get e Set*/ 
 public String getNome() {
  return nome;
 }

 public void setNome(String nome) {
  this.nome = nome;
 }

 public int getNumero() {
  return numero;
 }

 public void setNumero(int numero) {
  this.numero = numero;
 }

  /*Metodo vazio imprimir*/
 public void imprimeDados() {
  System.out.println("Nome: " + nome);
  System.out.println("Número: " + numero);
 }

}