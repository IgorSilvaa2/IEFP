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
    <h2>Recuperar Post</h2>
    <?php
    
    include 'includes/liga_bd.php';
    
    $sql = "UPDATE t_post SET apagado = 0 WHERE id =" . $_POST['id'];

    //echo $sql;
    if(mysqli_query($ligacao, $sql)) {
        echo "<h4>Post/Notícia recuperado com sucesso!</h4>";
    } 
    mysqli_close($ligacao);
    ?>
    <br><br>
    <input type="button" value="Voltar" onclick="window.history.go(-1);">
    <br></br>
    <input type="button" value="Voltar ao Menu" onclick="window.location.href='login2.php';">
</body>
</html>