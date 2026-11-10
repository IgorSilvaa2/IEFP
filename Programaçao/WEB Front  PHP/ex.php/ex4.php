<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    $nome = "Rui Monteiro";
    $idade = 50;
    echo "Bem vindo ao nosso site, <u>" . $nome . "</u>  é um prazer vê-lo por aqui. <br> 
    Vamos apostar <u>" . $idade . "</u>€ no euro-milhões ! <br>"; 

    echo "o tipo de dados do nome é: " . gettype($nome) . "<br>";
    echo "o tipo de dados da idade é: " . gettype($idade) . "<br>";
    ?>
</body>

</html>