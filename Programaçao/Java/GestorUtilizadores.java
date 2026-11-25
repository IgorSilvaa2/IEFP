
public class GestorUtilizadores {

    private Utilizador[] utilizadores;
    private int total;

    public GestorUtilizadores() {
        utilizadores = new Utilizador[100];
        total = 0;
    }

    public boolean registar(String user, String pass) {
        if (total == 100) {
            return false;
        } else {
            for (int i = 0; i < total; i++) {
                if (utilizadores[i].getUsername().equals(user)) {
                    return false;
                }
            }
            Utilizador novoUser = new Utilizador(user, pass); // 1. criar um utilizador com o username e a password
            utilizadores[total] = novoUser; // 2. guardar esse utilizador no vetor, na posição total
            total++; // 3. somar 1 ao total
            return true;
        }
    }

    public boolean autenticar(String user, String pass) {
        for (int i = 0; i < total; i++) {
            if (utilizadores[i].getUsername().equals(user) && utilizadores[i].getPassword().equals(pass)) {
                return true;
            }
        }
        return false;
    }
}
