
fun main(args: Array<String>) {
        executarExercicios()
        atividade10()
        boasVindas()
        mostrarMaior(10,20)
        println(calcularDobro(25))
        println(triplo(3))
}

    private fun executarExercicios() {
        val nome: String = "Ana"
        var idade: Int = 25
        val cidade: String = "Braga"

        val n1: Int = 8
        val n2: Int = 12
        val n3: Int = 15
        val media = (n1 + n2 + n3) / 3

        val textonumero = "25"
        val numeroConvertido = textonumero.toInt()

        val decimal = 8.9
        val decimalParaInt = decimal.toInt()

        val frase = "Me chamo $nome tenho $idade anos e moro em $cidade"
        println("Media: $media")
        println("Numero convertido: $numeroConvertido")
        println("Decimal convertido: $decimalParaInt")
        println(frase)

    }

    private fun atividade10(){
        val a = 10
        val b = 3
        val soma = a + b 
        val diferenca = a - b
        val produto = a * b
        val quociente = a.toDouble() / b
        val resto = a % b
        println("Soma: $soma")
        println("Diferenca: $diferenca")
        println("Produto: $produto")
        println("Quociente: $quociente")
        println("Resto: $resto")

        val nota = 14
        val positiva = nota >= 10
        val vinte = nota == 20
        val inferior = nota < 5
        println("Positiva: $positiva")
        println("Igual a 20: $vinte")
        println("Inferior a 5: $inferior")

        val idade = 15
        val temBilhete = true
        val estaAcompanhado = true
        val podeEntrar = idade >=18 && temBilhete || temBilhete && estaAcompanhado
        println("Pode entrar: $podeEntrar")

        val x = 2
        val y = 3
        val z = 4
        val maior = maxOf(x,y,z)
        println("Maior entre $x, $y e $z: $maior")
        val multiplo = maior % 3 == 0
        println("multiplo de 3: $multiplo" )

        val somaTudo = x + y + z
        val media = somaTudo.toDouble() /3
        val mediaVezes2 = media *2
        val somaSuperior = somaTudo > mediaVezes2
        println("Soma superior a media x 2: $somaSuperior") 
    }

    private fun boasVindas(){
        println("Bem-vindo ao Kotlin!")
    }

    private fun mostrarMaior(a: Int, b: Int){
        println (maxOf(a,b))
    }

    private fun calcularDobro(a: Int): Int{
        return a * 2
    }

    private fun triplo(a: Int)= a * 3


