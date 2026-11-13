<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="refresh" content="10;url=index.html" />
    <link rel="stylesheet" href="style.css">
    <title>Forum dos Programadores</title>
</head>

<body>
    <?php
    // Código PHP para inserir um cliente
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    // tratar o erro de ligação à base de dados
    if (!$ligacao) {
        die("Erro na ligação: " . mysqli_connect_error());
    }
    $sql = "UPDATE t_user set apagado=
    WHERE id =" . $_POST["id"] .
    // echo $sql;
    
    if (mysqli_query($ligacao, $sql)) {
        echo "<h1>Uaer bloqueado com sucesso</h1>";
    } else
        echo "Ocorreu um erro na alterção com sucesso";

    ?>
    <a href="index.html" target="_self"></a>
    <h2>Aguarde que vai ser redirecionado...</h2>

</body>

</html>