<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Forum dos Programadores - BA</title>
</head>
<body>
    <h1>Forum dos Programadores - BA</h1>
    <h2>Gerir Utilizadores</h2>
    <?php
    session_start();
    //criar a variavel ligação (ip do servidor, user, password, database)
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    if($ligacao->connect_error) {
        die(mysqli_error($ligacao));
    }
    //crio a instrução sql a ser executada
    $sql = "SELECT * FROM t_user";
    //tento executar a instrução sql usando a ligação
    $resultado = mysqli_query($ligacao, $sql) or die (mysqli_error($ligacao));
    //variavel para aguardar total de registos
    $numreg = 0;
    $numbloq = 0;
    //repete este ciclo enquanto houver linhas
    while($linha = mysqli_fetch_assoc($resultado)) {
        if($linha['apagado'] == 1) //apenas para colocar o fundo azul
            echo "<div style='background-color:lightblue'>";
            echo "Id: " . $linha['id'] . "<br>";
            echo "Nick: " . $linha['nick'] . "<br>";
            echo "Nome: " . $linha['nome'] . "<br>";
            echo "Email: " . $linha['email'] . "<br>";
            echo "Data de Nascimento: " . $linha['data_nasc'] . "<br>";
            echo "Foto:<br> <img src='" . $linha['foto'] . "' height=100'><br>";
        
        if($linha['apagado'] == 0) {
            ?>
            <form action="bloquear_U.php" method="POST">
            <input type="hidden" name="id" value="<?php echo $linha['id'];?>"><br>
            <input type="submit" value="Bloquear">    
            </form><br>
            <?php
        }
        else {
            $numbloq = $numbloq + 1;
            ?>
            <form action="desbloquear_U.php" method="POST">
            <input type="hidden" name="id" value="<?php echo $linha['id'];?>"><br>
            <input type="submit" value="Desbloquear">    
            </form><br>
            <?php
            echo "</div>";
        }
        ?>
        <form action="alterar_U.php" method="POST">
            <input type="hidden" name="id" value="<?php echo $linha['id'];?>"><br>
            <input type="submit" value="Alterar">    
        </form><br>
        <?php
        echo "<hr>";
        $numreg = $numreg + 1;
    }
    echo "N. total de utilizadores > " . $numreg;
    echo "<br>N. de utilizadores bloqueados > " . $numbloq;

    mysqli_close($ligacao);
    ?>
    <br><br>
    <input type="button" value="Voltar ao menu" onclick="window.location.href='login2.php';">
</body>
</html>