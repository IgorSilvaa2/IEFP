<html>

<head>
    <meta charset="utf-8">
    <link rel="stylesheet" href="style.css">
    <title>Alterar Clientes</title>
</head>

<body>
    <h1>Alterar Clientes</h1>
    <?php
    // obtem o valor da combobox do form anterior
    $cp_id = $_POST['cp_id'];

    // estabelece a conexão ao servidor
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "BD_01");
    if ($ligacao->connect_error) {
        die(mysqli_error($ligacao));
    }
    // procura na base de dados o registo que selecionei
    $sql = "SELECT * FROM T_CLIENTE WHERE id=" . $cp_id;
    $resultado = mysqli_query($ligacao, $sql) or die(mysqli_error($ligacao));
    $linha = mysqli_fetch_assoc($resultado);
    ?>
    <hr>
    <form action="alterar3.php" method="post">
        <p> Id: <input type="text" name="id" size="5" value="<?php echo $linha['id'] ?>" readonly></p>
        <p> Nome: <input type="text" name="nome" size="100" value="<?php echo $linha['nome'] ?>"></p>
        <p> Morada: <input type="text" name="morada" size="100" value="<?php echo $linha['morada'] ?>"></p>
        <p> Zona: <input type="text" name="zona" size="30" value=" <?php echo $linha['zona'] ?>"></p>
        <p> NIF: <input type="text" name="nif" size="9" value="<?php echo $linha['nif'] ?>"></p>
        <p> Volume de Facturação: <input type="text" name="vol_fatur" size="10" value="<?php echo $linha['vol_fatur']; ?>"></p>

        <input type="submit" value="Alterar">
        <input type="reset" value="Limpar">
        <input type="button" value="Cancelar" onclick="window.history.go(-1);">

    </form>
    <?php
    mysqli_close($ligacao);
    ?>
</body>

</html>