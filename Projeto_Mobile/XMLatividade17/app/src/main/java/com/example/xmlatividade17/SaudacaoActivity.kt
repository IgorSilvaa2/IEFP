package com.example.xmlatividade17

import android.os.Bundle
import android.widget.TextView
import android.widget.Button
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import android.content.Intent
import kotlin.jvm.java

class SaudacaoActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_saudacao)
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }
        val nome = findViewById<TextView>(R.id.telaSaudacao)
        val botao = findViewById<Button>(R.id.btnMais)
        val nomeRecebido = intent.getStringExtra("Nome")
        nome.text = "Olá, $nomeRecebido!"

        botao.setOnClickListener{
            val intent = Intent(this, AcoesActivity::class.java)
            startActivity(intent)

        }
    }
}