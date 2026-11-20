<?php
session_start(); // Tem de estar sempre na 1ª linha do ficheiro

$user = $_POST['nick'] ?? '';
$pass = $_POST['pass'] ?? '';

$ligacao = mysqli_connect("localhost", "root", "", "bd_forum");
if ($ligacao->connect_error) {
    die(mysqli_error($ligacao));
}

// Procura o utilizador pelo NICK recebido no formulário (e não pelo id)
$stmt = $ligacao->prepare("SELECT * FROM t_user WHERE nick = ?");
$stmt->bind_param("s", $user);
$stmt->execute();
$resultado = $stmt->get_result();
$linha = $resultado->fetch_assoc();

// Verifica se o utilizador existe e se a password está correta
if ($linha && strcmp($pass, $linha['pass']) === 0) {
    $_SESSION['id'] = $linha['id'];
    $_SESSION['nick'] = $linha['nick'];
    
    $stmt->close();
    mysqli_close($ligacao);
    
    header('Location: login2.php');
    exit();
}

$stmt->close();
mysqli_close($ligacao);
?>
<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Forum dos Programadores X - IS</title>
</head>

<body>
    <h1>Forum dos Programadores X - IS</h1>
    <h2>Login</h2>
    <h4>Dados inválidos!</h4>
    <a href="index.html">Volte a tentar</a>
</body>

</html>