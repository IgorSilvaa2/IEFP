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
    <h2>Bloquear Post - ADMIN</h2>
    <?php
    
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    if($ligacao->connect_error) {
        die(mysqli_error($ligacao));
    }
    
    $sql = "UPDATE t_post SET apagado =" . $_POST['motivo'] . " WHERE id =" . $_POST['id'];

    //echo $sql;
    if(mysqli_query($ligacao, $sql)) {
        echo "<h4>Post bloqueado com sucesso!</h4>";
    } 
    mysqli_close($ligacao);
    ?>
    <br><br>
    <input type="button" value="Voltar" onclick="window.history.go(-1);">
    <br></br>
    <a href="login2.php" target="self">Sair</a>
</body>
</html>