<?php session_start(); ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Forum dos Programadores - BA</title>
</head>
<body>
    <h1>Bem-Vindo ao Forum - BA</h1>
    <h2>Login</h2>
    <?php
    $user = $_POST['nick'];
    $pass = $_POST['pass'];

    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    if(!$ligacao) {
        die("Erro na ligação" . mysqli_connect_error());
    }
    //if(session_status() !== PHP_SESSION_ACTIVE) {}
    $sql = "SELECT * FROM t_user WHERE nick = '$user'";
    //echo $sql;
    $resultado = mysqli_query($ligacao, $sql);
    $linha = mysqli_fetch_assoc($resultado);

    if($linha == null) {
        echo "<h4>Dados inválidos!</h4>";
        echo "<a href='index.html'>Volte a tentar</a>";
    }
    if(strcmp($pass, $linha['pass']) == 0) {
        session_start();
        $_SESSION['id'] = $linha['id'];
        $_SESSION['nick'] = $linha['nick'];
        header('Location: login2.php');
    }
    else {
        //a senha está incorreta
        echo "<h4>Dados inválidos!</h4>";
        echo "<a href='index.html'>Volte a tentar</a>";
    }
    mysqli_close($ligacao);
    ?>

</body>
</html>