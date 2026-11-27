<?php
include 'includes/valida.php';
?>
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
    <h2>Eliminar Resposta</h2>
    <?php
    
    include 'includes/liga_bd.php';
    
    $sql = "UPDATE t_resp SET apagado = 1 WHERE id =" . $_POST['id'];

    //echo $sql;
    if(mysqli_query($ligacao, $sql)) {
        echo "<h4>Resposta eliminada com sucesso!</h4>";
    } 
    mysqli_close($ligacao);
    ?>
    <br><br>
    <input type="button" value="Voltar" onclick="window.history.go(-1);">
    <br></br>
    <a href="login2.php" target="self">Voltar ao Menu</a>
</body>
</html>