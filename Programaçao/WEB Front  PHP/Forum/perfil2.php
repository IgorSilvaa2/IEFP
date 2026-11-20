<?php
session_start();

// Verifica se o utilizador está autenticado e se os dados vieram por POST
if (!isset($_SESSION['id']) || $_SERVER['REQUEST_METHOD'] !== 'POST') {
    header("Location: index.html");
    exit();
}

$ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");

if (!$ligacao) {
    die("Erro na ligação: " . mysqli_connect_error());
}

// Prepared statement para atualizar os dados com segurança
$stmt = $ligacao->prepare("UPDATE t_user SET nick = ?, nome = ?, email = ?, data_nasc = ?, pass = ?, foto = ? WHERE id = ?");
$stmt->bind_param(
    "ssssssi",
    $_POST['nick'],
    $_POST['nome'],
    $_POST['email'],
    $_POST['data_nasc'],
    $_POST['pass'],
    $_POST['foto'],
    $_SESSION['id']
);

if ($stmt->execute()) {
    // Atualiza também o nick na sessão atual
    $_SESSION['nick'] = $_POST['nick'];
    $mensagem = "Utilizador alterado com sucesso!";
} else {
    $mensagem = "Erro ao alterar: " . $stmt->error;
}

$stmt->close();
mysqli_close($ligacao);
?>
<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="utf-8">
    <meta http-equiv="refresh" content="2;url=login2.php" />
    <title>Alterar Utilizadores</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <h1><?php echo htmlspecialchars($mensagem); ?></h1>
    <h2>Aguarde que vai ser redirecionado...</h2>
</body>

</html>