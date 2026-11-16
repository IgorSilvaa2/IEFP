<!DOCTYPE html>
<html lang="pt">
    <head>
        <meta charset="utf-8">
        <meta http-equiv="refresh" content="5;url=index.html" />
        <title>Alterar Utilizadores</title>
        <link rel="stylesheet" href="style.css">
    </head>
    <body>
<?php
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    
    if (!$ligacao) {
        die("Erro na ligação: " . mysqli_connect_error());
    }

    $sql = "UPDATE t_user SET
        nick='$_POST[nick]',
        nome='$_POST[nome]',
        email='$_POST[email]',
        data_nasc='$_POST[data_nasc]',
        pass='$_POST[pass]',
        foto='$_POST[foto]'
        WHERE id=$_POST[id]";

    if (mysqli_query($ligacao, $sql)) {
        echo "<h1>Utilizador alterado com sucesso!</h1>";
    } else {
        echo "<h1>Erro ao alterar: " . mysqli_error($ligacao) . "</h1>";
    }

    mysqli_close($ligacao);
?>
        <h2>Aguarde que vai ser redirecionado...</h2>
    </body>
</html>