package com.example.xmlatividade17

import android.os.Bundle
import android.widget.EditText
import android.widget.Button
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import android.content.Intent

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }
        // 1. encontrar o campo do nome (etNome)
        val nome = findViewById<EditText>(R.id.etNome)
        // 2. encontrar o botão (btnAvancar)
        val botao = findViewById<Button>(R.id.btnAvancar)
        // 3. quando clicarem no botão:
        botao.setOnClickListener {
            // 3a. ler o texto do campo
            val nomeEscrito = nome.text.toString()
            //3b. criar a Intent para a SaudacaoActivity
            val intent = Intent(this,SaudacaoActivity::class.java)
            // 3c. meter o nome na Intent
            intent.putExtra("Nome", nomeEscrito)
            // 3d. abrir o ecrã
            startActivity(intent)
        }


    }
}