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
    <h2>Listar Posts</h2>
    <?php
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    if($ligacao->connect_error) {
        die(mysqli_error($ligacao));
    }
    $sql = "SELECT * FROM t_post WHERE apagado = 0";
    
    $resultado = mysqli_query($ligacao, $sql) or die (mysqli_error($ligacao));

    $numreg = 0;

    //repete este ciclo enquanto houver linhas
    while($linha = mysqli_fetch_assoc($resultado)) {
        echo "<h3>Id: " . $linha['id'] . "</h3>";
        echo "<b>Tema:</b> " . $linha['tema'] . "<br>";
        echo "<b>Título:</b> " . $linha['titulo'] . "<br>";
        echo "<b>Texto:</b> " . $linha['texto'] . "<br>";
        echo "<b>Foto:</b><br> <img src='" . $linha['foto'] . "' height=100'><br>";

        $sql2 = "SELECT * FROM t_user WHERE id =" . $linha['id_user'];
        
        $resultado2 = mysqli_query($ligacao, $sql2) or die (mysqli_error($ligacao));
        $linha2 = mysqli_fetch_assoc($resultado2);
        echo "<h3>Nick: " . $linha2['nick'] . "</h3>";

        ?>
        <form action="inserir_r.php" method="POST">
            <input type="hidden" value="<?php echo $linha['id'];?>" name="id_post"><br>
            <input type="submit" value="Ver Respostas / Responder">    
        </form>
        <?php
        echo "<hr>";
        $numreg = $numreg + 1;
    }
    echo "N. de Postagens > " . $numreg;
    mysqli_close($ligacao);
    ?>
    <br><br>
    <input type="button" value="Voltar ao menu" onclick="window.history.go(-1);">
</body>
</html>