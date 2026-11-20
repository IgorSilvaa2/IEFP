package com.example.xmlatividade16

import android.os.Bundle
import android.util.Log
import android.widget.Button
import android.widget.EditText
import androidx.activity.ComponentActivity


private fun validarFormulario(nome: String, email: String, idade: String) {
    if (nome.isEmpty()) {
        Log.i("--FORUM", "Erro: Nome vazio--")
        return
    }


    if (!email.contains("@")) {
        Log.i("--FORUM", "Erro: Email Invalido--")
        return
    }


    val idadeNum = idade.toIntOrNull()
    if (idadeNum == null || idadeNum < 0) {
        Log.i("--FORUM", "Erro: Idade Invalida--")
        return
    }

    Log.i("--FORUM", "Sucesso: Formulário válido!")
    Log.i("--FORUM", "Nome: $nome")
    Log.i("--FORUM", "Email: $email")
    Log.i("--FORUM", "idade: $idadeNum")

}

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.layout)

        val nome = findViewById<EditText>(R.id.editNome)
        val email = findViewById<EditText>(R.id.editEmail)
        val idade = findViewById<EditText>(R.id.editIdade)
        val btnValidar = findViewById<Button>(R.id.btnValidar)

        btnValidar.setOnClickListener {
            validarFormulario(
                nome.text.toString(),
                email.text.toString(),
                idade.text.toString()
            )
        }
    }
}