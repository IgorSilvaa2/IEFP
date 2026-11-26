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
    <h2>Registo de Utilizadores</h2>
    <?php
    //criar a variavel ligação (ip do servidor, user, password, database)
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    if($ligacao->connect_error) {
        die(mysqli_error($ligacao));
    }
    //crio a instrução sql a ser executada
    $sql = "INSERT INTO t_user (nick, nome, email, data_nasc, pass, foto)
            VALUES ('$_POST[nick]', '$_POST[nome]', '$_POST[email]', '$_POST[data_nasc]', '$_POST[pass]', '$_POST[foto]')";

    //echo $sql;
    if(mysqli_query($ligacao, $sql)) {
        echo "<h1>Registo efetuado com sucesso!</h1>";
    } 
    mysqli_close($ligacao);
    ?>
    <h2>Aguarde que vai ser redirecionado</h2>
    <br><br>
    <input type="button" value="Voltar ao menu" onclick="window.history.go(-2);">
</body>
</html>