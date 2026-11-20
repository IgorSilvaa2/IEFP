<?php
session_start();

// Verifica se o utilizador tem sessão iniciada e se o formulário foi submetido
if (!isset($_SESSION['id']) || $_SERVER['REQUEST_METHOD'] !== 'POST') {
    header("Location: index.html");
    exit();
}

$ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");

if (!$ligacao) {
    die("Erro na ligação: " . mysqli_connect_error());
}

// Insere o post na tabela t_post usando Prepared Statements
$stmt = $ligacao->prepare("INSERT INTO t_post (tema, titulo, texto, foto, id_user) VALUES (?, ?, ?, ?, ?)");
$stmt->bind_param(
    "ssssi",
    $_POST['tema'],
    $_POST['titulo'],
    $_POST['texto'],
    $_POST['foto'],
    $_SESSION['id']
);

if ($stmt->execute()) {
    $mensagem = "Post colocado com sucesso!";
} else {
    $mensagem = "Erro ao colocar post: " . $stmt->error;
}

$stmt->close();
mysqli_close($ligacao);
?>
<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="utf-8">
    <meta http-equiv="refresh" content="2;url=login2.php" />
    <link rel="stylesheet" href="style.css">
    <title>Inserir Posts</title>
</head>

<body>
    <h1><?php echo htmlspecialchars($mensagem); ?></h1>
    <input type="button" value="Continuar" onclick="window.location.href='login2.php'">
</body>

</html>