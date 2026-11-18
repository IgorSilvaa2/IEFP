package com.example.kotlinexercicios

import android.os.Bundle
import android.util.Log
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import com.example.kotlinexercicios.ui.theme.KotlinExerciciosTheme

private fun executarExercicios() {
    val nome: String = "Ana"
    var idade: Int = 25
    val cidade: String = "Braga"

    val n1: Int = 8
    val n2: Int = 12
    val n3: Int = 15
    val media = (n1 + n2 + n3) / 3.0

    val textonumero = "25"
    val numeroConvertido = textonumero.toInt()

    val decimal = 8.9
    val decimalParaInt = decimal.toInt()

    val frase = "Me chamo $nome, tenho $idade anos e moro em $cidade"

    // Usamos "EXERCICIO" como etiqueta (Tag) para filtrar no Logcat
    Log.d("EXERCICIO", "Media: $media")
    Log.d("EXERCICIO", "Numero convertido: $numeroConvertido")
    Log.d("EXERCICIO", "Decimal convertido: $decimalParaInt")
    Log.d("EXERCICIO", frase)
}

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContent {
            KotlinExerciciosTheme {
                executarExercicios()
            }
        }
    }
}