<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="refresh" content="10;url=index.html" />
    <link rel="stylesheet" href="style.css">
    <title>Inserir Clientes</title>
</head>

<body>
    <?php
    // Código PHP para inserir um cliente
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    // tratar o erro de ligação à base de dados
    if (!$ligacao) {
        die("Erro na ligação: " . mysqli_connect_error());
    }
    $sql = "INSERT INTO t_user (nick, nome, email, data_nasc, pass, foto) VALUES 
        ('$_POST[nick]',
         '$_POST[nome]',
          '$_POST[email]',
           '$_POST[data_nasc]',
             '$_POST[pass]',
                '$_POST[foto]')";
    // echo $sql;
    
    if (mysqli_query($ligacao, $sql)) {
        echo "<h1>Cliente registado com sucesso!</h1>";
    } else
        mysqli_error($ligacao);

    mysqli_close($ligacao);

    ?>
    <h2>Aguarde que vai ser redirecionado...</h2>

</body>

</html>