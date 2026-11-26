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
    <h2>Gerir Posts</h2>
    <?php
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    if($ligacao->connect_error) {
        die(mysqli_error($ligacao));
    }
    $sql = "SELECT * FROM t_post";
    
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

        if($linha['apagado'] == 0){
            echo "<form action='bloquear_padmin.php' method='POST'>";
            echo "<input type='hidden' name='id' value='" . $linha['id'] . "'>";
            echo "Motivo: <select name='motivo'>";

            $sql3 = "SELECT * FROM t_motivo";
            $resultado3 = mysqli_query($ligacao, $sql3);

            while($linha3=mysqli_fetch_assoc($resultado3)) {
                echo "<option value='" . $linha3['id'] . "'>" . $linha3['motivo'] . "</option>";
            }
            echo "<input type='submit' value='Bloquear'></form>";
        }
        else {
            echo "<form action='recuperar_p.php' method='POST'>";
            echo "<input type='hidden' name='id' value='" . $linha['id'] . "'>";
            echo "<input type='submit' value='Recuperar'></form>";
        }
        echo "<hr>";
        $numreg++;
    }
    echo "Total de Registos > " . $numreg;
    mysqli_close($ligacao);
    ?>
    <br><br>
    <input type="button" value="Voltar ao menu" onclick="window.history.go(-1);">
</body>
</html>