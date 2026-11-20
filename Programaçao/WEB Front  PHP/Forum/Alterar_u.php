<?php
// Verifica se o formulário anterior enviou o ID
if (!isset($_POST['id_user']) || empty($_POST['id_user'])) {
    die("Erro: Nenhum utilizador selecionado. <a href='javascript:history.back()'>Voltar</a>");
}

$cp_user = (int) $_POST['id_user']; // Converte para inteiro por segurança

$ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
if (!$ligacao) {
    die("Erro na ligação: " . mysqli_connect_error());
}

// Prepared statement para evitar SQL Injection
$stmt = $ligacao->prepare("SELECT * FROM t_user WHERE id = ?");
$stmt->bind_param("i", $cp_user);
$stmt->execute();
$resultado = $stmt->get_result();
$linha = $resultado->fetch_assoc();

// Verifica se encontrou o utilizador na base de dados
if (!$linha) {
    $stmt->close();
    mysqli_close($ligacao);
    die("Erro: Utilizador não encontrado.");
}
?>
<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Alterar Utilizadores</title>
</head>

<body>
    <h1>Alterar Utilizadores</h1>
    <hr>
    <form action="alterar_u2.php" method="post">
        <input type="hidden" name="id" value="<?php echo htmlspecialchars($linha['id']); ?>">

        <p>Nick: <input type="text" name="nick" size="50" required
                value="<?php echo htmlspecialchars($linha['nick']); ?>"></p>
        <p>Nome: <input type="text" name="nome" size="100" required
                value="<?php echo htmlspecialchars($linha['nome']); ?>"></p>
        <p>E-mail: <input type="email" name="email" size="100" required
                value="<?php echo htmlspecialchars($linha['email']); ?>"></p>
        <p>Data de Nascimento: <input type="date" name="data_nasc"
                value="<?php echo htmlspecialchars($linha['data_nasc']); ?>"></p>
        <p>Pass: <input type="password" name="pass" size="50" required
                value="<?php echo htmlspecialchars($linha['pass']); ?>"></p>
        <p>Foto (URL): <input type="text" name="foto" size="100"
                value="<?php echo htmlspecialchars($linha['foto']); ?>"></p>

        <input type="submit" value="Atualizar">
        <input type="reset" value="Repor">
        <input type="button" value="Cancelar" onclick="window.history.go(-1);">
    </form>
</body>

</html>
<?php
$stmt->close();
mysqli_close($ligacao);
?>