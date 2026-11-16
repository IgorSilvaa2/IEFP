<html>

<head>
    <meta charset="utf-8">
    <link rel="stylesheet" href="style.css">
    <title>Alterar Utilizadores</title>
</head>

<body>
    <h1>Alterar Utilizadores</h1>
    <?php
    $cp_user = $_POST['id_user'];

    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    if ($ligacao->connect_error) {
        die(mysqli_error($ligacao));
    }

    $sql = "SELECT * FROM t_user WHERE id=" . $cp_user;
    $resultado = mysqli_query($ligacao, $sql) or die(mysqli_error($ligacao));
    $linha = mysqli_fetch_assoc($resultado);
    ?>
    <hr>
    <form action="alterar_u2.php" method="post">
        <input type="hidden" name="id" value="<?php echo $linha['id']; ?>">
        <p> Nick: <input type="text" name="nick" size="50" value="<?php echo $linha['nick']; ?>"></p>
        <p> Nome: <input type="text" name="nome" size="100" value="<?php echo $linha['nome']; ?>"></p>
        <p> E-mail: <input type="email" name="email" size="100" value="<?php echo $linha['email']; ?>"></p>
        <p> Data de Nascimento: <input type="date" name="data_nasc" value="<?php echo $linha['data_nasc']; ?>"></p>
        <p> Pass: <input type="text" name="pass" size="50" value="<?php echo $linha['pass']; ?>"></p>
        <p> Foto (URL): <input type="text" name="foto" size="100" value="<?php echo $linha['foto']; ?>"></p>

        <input type="submit" value="Atualizar">
        <input type="reset" value="Limpar">
        <input type="button" value="Cancelar" onclick="window.history.go(-1);">
    </form>
    <?php
    mysqli_close($ligacao);
    ?>
</body>

</html>