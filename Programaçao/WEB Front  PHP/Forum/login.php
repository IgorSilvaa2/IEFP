<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Forum dos Programadores X - RM</title>
</head>

<body>
    <h1>Forum dos Programadores X - RM</h1>
    <h2>Alterar Conta X</h2>
    <?php
    $user = $_POST['nick'];
    $pass = $_POST['pass'];
    //criar a variavel ligação (ip do servidor, user, senha, base dados)
    $ligacao = mysqli_connect("localhost", "root", "", "bd_forum");
    if ($ligacao->connect_error)
        die(mysqli_error($ligacao));

    //crio a instrução sql a ser executada
    $sql = "SELECT * FROM t_user WHERE nick='" . $user . "'";
    //tento executar a instrução sql usando a ligação
    $resultado = mysqli_query($ligacao, $sql);
    if ($resultado == null) {
        echo "<h4>Dados inválidos!</h4>";
        echo "<a href='index.html'>Volte a tentar</a>";
    } else {
        $linha = mysqli_fetch_assoc($resultado);
        if ($linha && strcmp($pass, $linha['pass']) === 0) {
            //a senha está correta
            session_start();
            $_SESSION['id'] = $linha['id'];
            $_SESSION['nick'] = $linha['nick'];
            header('Location: login2.php');
        } else {
            //a senha está incorreta
            echo "<h4>Dados inválidos!</h4>";
            echo "<a href='index.html'>Volte a tentar</a>";
        }
    }
    mysqli_close($ligacao);
    ?>

</body>

</html>