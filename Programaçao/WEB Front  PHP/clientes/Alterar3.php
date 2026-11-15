<!DOCTYPE html>
<html lang="pt">
    <head>
        <meta charset="utf-8">
        <meta http-equiv="refresh" content="5;url=index.html" />
        <title>Alterar Clientes</title>
        <link rel="stylesheet" href="estilos.css">
    </head>
    <body>
<?php
    // Liga-se ao servidor com user e pass
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_01");
    
    // Verifica se a ligação é feita com sucesso
    if (!$ligacao) {
        die("Erro na ligação: " . mysqli_connect_error());
    }

    // Instrução SQL corrigida (vol_fatur sem 'c')
    $sql = "UPDATE t_cliente SET
        nome='$_POST[nome]',
        morada='$_POST[morada]',
        zona='$_POST[zona]',
        nif='$_POST[nif]',
        vol_fatur=$_POST[vol_fatur]
        WHERE id=$_POST[id]";

    if (mysqli_query($ligacao, $sql)) {
        echo "<h1>Cliente alterado com sucesso!</h1>";
    } else {
        echo "<h1>Erro ao alterar: " . mysqli_error($ligacao) . "</h1>";
    }

    mysqli_close($ligacao);
?>
        <h2>Aguarde que vai ser redirecionado...</h2>
    </body>
</html>