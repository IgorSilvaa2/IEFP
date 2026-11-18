package com.example.atividade12

import android.os.Bundle
import android.util.Log
import androidx.activity.ComponentActivity

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        // Coloque o código de todos os exercícios aqui dentro:
        val a = 5
        if (a > 0) {
            Log.d("EXERCICIO", "O numero e positivo: $a")
        }
        val b = 20
        if (b >= 0 && b <= 9) {
            Log.d("EXERCICIO", "Insuficiente: $b")
        } else if (b >= 10 && b <= 13) {
            Log.d("EXERCICIO", "Suficiente: $b")
        } else if (b >= 14 && b <= 17) {
            Log.d("EXERCICIO", "Bom: $b")
        } else if (b >= 18 && b <= 20) {
            Log.d("EXERCICIO", "Excelente: $b")
        }

        val season = 1

        when (season) {
            1 -> Log.d("EXERCICIO", "Inverno (21 de dezembro a 19 de março)")
            2 -> Log.d("EXERCICIO", "Verão (21 de junho a 22 de setembro)")
            3 -> Log.d("EXERCICIO", "Primavera (20 de março a 20 de junho)")
            4 -> Log.d("EXERCICIO", "Outono (23 de setembro a 20 de dezembro)")
            else -> Log.d("EXERCICIO", "Invalido")
        }

    }
}
