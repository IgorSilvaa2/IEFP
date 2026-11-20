<?php
session_start();

// Verifica se o utilizador tem sessão iniciada
if (!isset($_SESSION['id'])) {
    header("Location: index.html");
    exit();
}

$cp_user = (int) $_SESSION['id'];

$ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
if (!$ligacao) {
    die("Erro na ligação: " . mysqli_connect_error());
}

$stmt = $ligacao->prepare("SELECT * FROM t_user WHERE id = ?");
$stmt->bind_param("i", $cp_user);
$stmt->execute();
$resultado = $stmt->get_result();
$linha = $resultado->fetch_assoc();

if (!$linha) {
    $stmt->close();
    mysqli_close($ligacao);
    die("Utilizador não encontrado.");
}
?>
<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Editar Perfil</title>
</head>

<body>
    <h1>Editar dados do utilizador</h1>
    <hr>
    <!-- Aponta para perfil2.php conforme o guião -->
    <form action="perfil2.php" method="post" name="f1">
        <input type="hidden" name="id" value="<?php echo htmlspecialchars($linha['id']); ?>">

        <p> Nick: <input type="text" name="nick" size="50" readonly
                value="<?php echo htmlspecialchars($linha['nick']); ?>"></p>
        <p> Nome: <input type="text" name="nome" size="100" required
                value="<?php echo htmlspecialchars($linha['nome']); ?>"></p>
        <p> E-mail: <input type="email" name="email" size="100" required
                value="<?php echo htmlspecialchars($linha['email']); ?>"></p>
        <p> Data de Nascimento: <input type="date" name="data_nasc" required
                value="<?php echo htmlspecialchars($linha['data_nasc']); ?>"></p>
        <p> Pass: <input type="password" name="pass" size="50" required
                value="<?php echo htmlspecialchars($linha['pass']); ?>"></p>
        <p> Foto (URL): <input type="text" name="foto" size="100"
                value="<?php echo htmlspecialchars($linha['foto']); ?>"></p>

        <input type="submit" value="Alterar">
        <input type="reset" value="Limpar">
        <input type="button" value="Voltar" onclick="window.history.go(-1);">
    </form>
</body>

</html>
<?php
$stmt->close();
mysqli_close($ligacao);
?>