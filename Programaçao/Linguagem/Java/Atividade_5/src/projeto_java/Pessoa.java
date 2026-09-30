//Classe
package projeto_java;

public class Pessoa {
    private String primeiroNome;
    private String ultimoNome;
    private String morada;
    private String email;
    private int nif;
    private boolean casado;

    public Pessoa(String primeiroNome, String ultimoNome, String morada, String email, int nif, Boolean casado){
        this.primeiroNome = primeiroNome;
        this.ultimoNome = ultimoNome;
        this.morada = morada;
        this.email = email;
        this.nif = nif;
        this.casado = casado;
    }
 
    public String getPrimeiroNome() {
        return primeiroNome;
    }
    public void setPrimeiroNome(String primeiroNome) {
        this.primeiroNome = primeiroNome;
    }
    public String getUltimoNome() {
        return ultimoNome;
    }
    public void setUltimoNome(String ultimoNome) {
        this.ultimoNome = ultimoNome;
    }
    public String getMoradaString() {
        return morada;
    }
    public void setMorada(String morada) {
        this.morada = morada;
    }
    public String getEmail() {
        return email;
    }
    public void setEmail(String email) {
        this.email = email;
    }
    public int getNif() {
        return nif;
    }
    public void setNif(int nif) {
        this.nif = nif;
    }
    public boolean isCasado() {
        return casado;
    }
    public void setCasado(boolean casado) {
        this.casado = casado;
    }

    public void exibirDados() {
        System.out.println("{\n\tPrimeiro nome: " + primeiroNome + "\n\tUltimo Nome: " + ultimoNome + "\n\tMorada: " + morada + "\n\tEmail: " + email + "\n\tNIF: " + nif + "\n\tCasado? " + casado + "\n}");
    }
}
 

