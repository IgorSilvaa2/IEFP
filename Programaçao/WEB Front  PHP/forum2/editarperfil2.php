<?php
include 'includes/valida.php';
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta http-equiv="refresh" content="3;login2.php">
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Forum dos Programadores - BA</title>
</head>
<body>
    <h1>Forum dos Programadores - BA</h1>
    <h2>Editar Perfil</h2>
    <?php
    
    include 'includes/liga_bd.php';
   
    $sql = "UPDATE t_user SET nome = ('$_POST[nick]', '$_POST[nome]', '$_POST[email]', '$_POST[data_nasc]', '$_POST[pass]', '$_POST[foto]') WHERE id = '$_POST[id]'";
    //echo $sql;
    if(mysqli_query($ligacao, $sql)) {
        echo "<h4>Registo editado com sucesso!</h4>";
    }
    else
        echo "<h4>Ocorreu um erro na inserção de dados!</h4>";
    mysqli_close($ligacao);
    ?>
    <h2>Aguarde que vai ser redirecionado</h2>
    <br><br>
    <input type="button" value="Voltar ao menu" onclick="window.history.go(-2);">
    <a href="login2.php" target="self">Voltar ao Menu</a>
</body>
</html>