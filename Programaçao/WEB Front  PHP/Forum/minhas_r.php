<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Forum dos Programadores - BA</title>
</head>
<body>
    <?php session_start(); ?>
    <h1>Forum dos Programadores - BA</h1>
    <h2>Minhas respostas</h2>
    <?php
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    if($ligacao->connect_error) {
        die(mysqli_error($ligacao));
    }
    $sql = "SELECT * FROM t_resp WHERE id_user =" . $_SESSION['id'];
    
    $resultado = mysqli_query($ligacao, $sql) or die (mysqli_error($ligacao));

    $numreg = 0;

    //repete este ciclo enquanto houver linhas
    while($linha = mysqli_fetch_assoc($resultado)) {
        if($linha['apagado'] == 0) {
            echo "<font color='black'>";
        } else {
            echo "<font color='red'>";
        }
        echo "<h5>Id: " . $linha['id'] . "</h5>";
        echo "<b>Texto:</b> " . $linha['texto'] . "<br>";
        echo "<b>Foto:</b><br> <img src='" . $linha['foto'] . "' height=100'><br>";
        echo "</font>"; 
        if($linha['apagado'] == 0) {
        ?>
        <form action="eliminar_r.php" method="POST">
            <input type="hidden" value="<?php echo $linha['id'];?>"  name="id"><br>
            <input type="submit" value="Eliminar resposta">    
        </form><br>
        <?php
        }
        if($linha['apagado'] == 1) {
        ?>
        <form action="recuperar_r.php" method="POST">
            <input type="hidden" value="<?php echo $linha['id'];?>"  name="id"><br>
            <input type="submit" value="Recuperar resposta">    
        </form><br>
        <?php
        }
        if($linha['apagado'] > 1)
            echo "<marquee><h1>Resposta Bloqueada pelo ADMIN</h1></marquee>";
        echo "<hr>";
        $numreg = $numreg + 1;
    }
    echo "N. de Postagens > " . $numreg;
    mysqli_close($ligacao);
    ?>
    <br><br>
    <input type="button" value="Voltar" onclick="window.history.go(-1);">
</body>
</html>