<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="refresh" content="3;url=index.html" />
    <title>Eliminação de Clientes</title>
</head>

<body>
    <h1>Eliminação de Clientes - RM</h1>
    <hr>
    <?php
    // Recebe o ID enviado pelo formulário da página anterior
    $cp_id = $_POST["cp_id"];

    // Liga-se ao servidor com user e pass
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "BD_01");

    // Verifica se houve erro na ligação
    if (!$ligacao) {
        die("Erro na ligação à base de dados: " . mysqli_connect_error());
    }

    // Instrução SQL para apagar o cliente com o ID selecionado
    $sql = "DELETE FROM T_CLIENTE WHERE id=" . $cp_id;

    if (mysqli_query($ligacao, $sql)) {
        echo "<h2>Cliente apagado com sucesso!</h2>";
    } else {
        echo "Erro! " . mysqli_error($ligacao);
    }

    mysqli_close($ligacao);
    ?>
    <p>
    <h2>Aguarde, vai ser redirecionado...</h2>
    </p>

</body>

</html>