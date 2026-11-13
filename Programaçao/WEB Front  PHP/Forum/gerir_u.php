<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Gestão de Clientes - IS </title>
</head>

<body>
    <h1>Gestão</h1>
    <h2>Listagem de users </h2>
    <?php
    // Código PHP para listar os clientes
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    // tratar o erro de ligação à base de dados
    if ($ligacao->connect_error) {
        die("Erro na ligação à base de dados: " . mysqli_connect_error($ligacao));

    }
    // crio a instrução SQL para selecionar todos os clientes da tabela t_forum
    $sql = "SELECT * FROM t_user";
    // executo a instrução SQL no meu servidor e verifico se ocorreu algum erro
    $resultado = mysqli_query($ligacao, $sql) or die("Erro na consulta SQL: " . mysqli_error($ligacao));
    
    // crio um siclo para percorrer todos os registos retornados pela consulta SQL
    while ($linha = mysqli_fetch_assoc($resultado)) {
        echo "id: " . $linha['id'] . "<br>";
        echo "Nick: " . $linha['nick'] . "<br>";
        echo "nome: " . $linha['nome'] . "<br>";
        echo "E-mail: " . $linha['email'] . "<br>";
        echo "Data de Nascimento: " . $linha['data_nasc'] . "<br>";
        echo "Password: " . $linha['pass'] . "<br>";
        echo "Foto: <br> <img src='" . $linha['foto'] . " 'height='100' ><br>";
        //função para alterar ultilizadores  
        echo "<form action='alterar_u.php' method='post'>";
        echo "<input type='hidden' name='id' value='" . $linha['id'] . "'>";
        echo "<input type='submit'  value='Alterar'></form" ;
        mysqli_close($ligacao);
        if ($linha ['apagado']== 0) 
            {
            // caso o uttilizador esteja bloqueado 
            ?>
            <form action="bloquear_u.php" method="post">
            <input type="hidden" >
            </form><br>
            
            
        }
    }

    echo "Número de registos: " . $num_reg . "<br>";
    mysqli_close($ligacao);
    ?>

    <br><br>
    <input type="button" value="Voltar ao menu" onclick="window.history.go(-1)">
</body>

</html>