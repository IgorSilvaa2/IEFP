<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <h1>Cálculo do Índice de Massa Corporal</h1>
    <?php
    $peso = 69; // Peso em kg
    $altura = 1.77; // Altura em metros
    // o imc é calculado dividindo o peso pela altura ao quadrado
    $imc = $peso / ($altura * $altura);
    /*Regras
    se o imc estiver abaixo de 18 esta abaixo do peso médio
    se o imc estiver entre 18 e 25 esta no peso ideal
    se o imc estiver acima de 25 e 30 esta acima do peso médio
    se o imc estiver acima de 30 esta obeso
     */
    if ($imc < 18) {
        echo "O seu imc é " . number_format($imc, 2) . " esta abaixo do peso médio";
    } elseif ($imc >= 18 && $imc < 25) {
        echo "O seu imc é " . number_format($imc, 2) . " esta no peso ideal";
    } elseif ($imc >= 25 && $imc < 30) {
        echo "O seu imc é " . number_format($imc, 2) . " esta acima do peso médio";
    } else {
        echo "O seu imc é " . number_format($imc, 2) . " esta obeso";
    }
    ?>
</body>

</html>