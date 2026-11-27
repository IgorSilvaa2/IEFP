<?php
include 'includes/valida.php';
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta http-equiv="refresh" content="10;listar_p.php">
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Forum dos Programadores - BA</title>
</head>
<body>
    <h1>Forum dos Programadores - BA</h1>
    <h2>Resposta Post</h2>
    <?php
    
    include 'includes/liga_bd.php';
   
    $sql = "INSERT INTO t_resp (id_post, id_user, texto, foto) VALUES ('$_POST[id_post]', '$_POST[id_user]', '$_POST[texto]', '$_POST[foto]')";
    //echo $sql;
    if(mysqli_query($ligacao, $sql)) {
        echo "<h4>Resposta inserida com sucesso!</h4>";
    }
    else
        echo "<h4>Ocorreu um erro!</h4>";
    mysqli_close($ligacao);
    ?>
    <br><br>
    <input type="button" value="Continuar" onclick="window.history.go(-2);">
</body>
</html>