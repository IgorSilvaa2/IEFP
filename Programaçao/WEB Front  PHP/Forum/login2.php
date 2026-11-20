<?php
session_start();
// Proteção extra: se alguém tentar abrir o login2.php sem fazer login, volta para o início
if (!isset($_SESSION['id'])) {
    header('Location: index.html');
    exit();
}
?>
<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Forum dos Programadores X - IS</title>
</head>

<body>
    <h1>Forum dos Programadores X - RM</h1>
    <h2>Bem vindo <?php echo htmlspecialchars($_SESSION['nick']); ?></h2>

    <input type="button" value="Editar Perfil" onclick="window.open('perfil.php','_self')">
    <input type="button" value="Colocar Post" onclick="window.open('inserir_p.php','_self')">
    <input type="button" value="Listar Posts" onclick="window.open('listar_P.php','_self')">
    <input type="button" value="Meus Posts" onclick="window.open('meusP.php','_self')">
    <input type="button" value="Minhas Respostas" onclick="window.open('minhasR.php','_self')">
    <input type="button" value="Logout" onclick="window.open('logout.php','_self')">

</body>

</html>