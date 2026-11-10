<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Gestão de Clientes - RM </title>
</head>

<body>
    <h1>Gestão de Clientes - RM </h1>
    <h2>Listagem de Clientes </h2>
    <?php
    // Código PHP para listar os clientes
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_01");
    // tratar o erro de ligação à base de dados
    if ($ligacao->connect_error) {
        die("Erro na ligação à base de dados: " . mysqli_connect_error($ligacao));

    }
    // crio a instrução SQL para selecionar todos os clientes da tabela t_clientes
    $sql = "SELECT * FROM t_cliente";
    // executo a instrução SQL no meu servidor e verifico se ocorreu algum erro
    $resultado = mysqli_query($ligacao, $sql) or die("Erro na consulta SQL: " . mysqli_error($ligacao));
    $num_reg = 0;
    // crio um siclo para percorrer todos os registos retornados pela consulta SQL
    while ($linha = mysqli_fetch_assoc($resultado)) {
        echo "id: " . $linha['id'] . "<br>";
        echo "nome: " . $linha['nome'] . "<br>";
        echo "morada: " . $linha['morada'] . "<br>";
        echo "Zona: " . $linha['zona'] . "<br>";
        echo "NIF: " . $linha['nif'] . "<br>";
        echo "Volume de faturações: " . $linha['vol_fatur'] . "<br>";
        echo "<hr>";
        $num_reg++;

    }

    echo "Número de registos: " . $num_reg . "<br>";
    mysqli_close($ligacao);
    ?>

    <br><br>
    <input type="button" value="Voltar ao menu" onclick="window.history.go(-1)">
</body>

</html>