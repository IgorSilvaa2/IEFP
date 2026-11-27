<?php
session_start();

if (!isset($_SESSION['id'])) {
    header("Location: index.html");
    exit();
}
?>
<!DOCTYPE html>
<html lang="pt">
<head>
    <meta http-equiv="refresh" content="3;login2.php">
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Forum dos Programadores - BA</title>
</head>
<body>
    <h1>Forum dos Programadores - BA</h1>
    <h2>Editar Perfil</h2>

    <?php
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");

    if (!$ligacao) {
        die("Erro na ligação: " . mysqli_connect_error());
    }

    $id = (int) $_SESSION['id'];
    $nick = $_POST['nick'];
    $nome = $_POST['nome'];
    $email = $_POST['email'];
    $data_nasc = $_POST['data_nasc'];
    $pass = $_POST['pass'];
    $foto = $_POST['foto'];

    $sql = "UPDATE t_user SET
            nick = ?,
            nome = ?,
            email = ?,
            data_nasc = ?,
            pass = ?,
            foto = ?
            WHERE id = ? AND apagado = 0";

    $stmt = $ligacao->prepare($sql);

    $stmt->bind_param(
        "ssssssi",
        $nick,
        $nome,
        $email,
        $data_nasc,
        $pass,
        $foto,
        $id
    );

    try {
        if ($stmt->execute()) {
            $_SESSION['nick'] = $nick;
            echo "<h4>Registo editado com sucesso!</h4>";
        } else {
            echo "<h4>Ocorreu um erro ao editar o perfil!</h4>";
        }
    } catch (mysqli_sql_exception $e) {
        echo "<h4>Não foi possível editar o perfil!</h4>";
    }

    $stmt->close();
    mysqli_close($ligacao);
    ?>

    <h2>Aguarde que vai ser redirecionado</h2>
    <br><br>
    <a href="login2.php">Voltar ao menu</a>
</body>
</html>