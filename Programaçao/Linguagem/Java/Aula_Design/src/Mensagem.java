import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Mensagem {

    public static void main(String[] args) {
        // 1. Cria  ajanela principal
        JFrame janela = new JFrame("Saudação");
        janela.setSize(350, 150);
        janela.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        janela.setLocationRelativeTo(null); // Centraliza no ecrã
        janela.setLayout(new FlowLayout(FlowLayout.CENTER, 10, 20)); // Alinhamento simples em linha
        
        // 2. Cria os componentes
        JLabel lblInstrucao = new JLabel("Escreva o seu nome:");
        JTextField txtNome = new JTextField(15); // Caixa de texto com largura para 15 caracteres
        JButton btnEnviar = new JButton("Enviar");
        
        txtNome.setBackground(Color.PINK);
        
        // 3. Adiciona os componentes à janela
        janela.add(lblInstrucao);
        janela.add(txtNome);
        janela.add(btnEnviar);

        // 4. Cria a ação do botão
        btnEnviar.addActionListener(new ActionListener() {
        @Override
        public void actionPerformed(ActionEvent e) {
                String nome = txtNome.getText().trim();

                // Validação: verifica se a caixa está vazia
                if (nome.isEmpty()) {
                    JOptionPane.showMessageDialog(janela, "Por favor, introduza um nome!", "Aviso",
                            JOptionPane.WARNING_MESSAGE);
                } else {
                // Abre a caixa de mensagem com a saudação
                    JOptionPane.showMessageDialog(janela, "Olá, " + nome + "! Seja bem-vindo(a).", "Mensagem",
                            JOptionPane.INFORMATION_MESSAGE);
                }
            }
        });

        // 5. Mostra a janela
        janela.setVisible(true);
    }
}