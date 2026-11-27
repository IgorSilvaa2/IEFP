<?php
include 'includes/valida.php';
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Forum 2 - BA</title>
</head>
<body>
    <h1>Forum dos Programadores - BA</h1>
    <h2>Bem vindo <?php echo $_SESSION['nick'];?></h2><br>
    
    <input type="button" value="Editar Perfil" onclick="window.open('editarperfil.php', '_self')">
    <input type="button" value="Inserir Post/notícia" onclick="window.open('inserir_p.php', '_self')">
    <input type="button" value="Listar Posts/notícias" onclick="window.open('listar_p.php', '_self')">
    <input type="button" value="Meus Posts/notícias" onclick="window.open('meus_p.php', '_self')">
    <input type="button" value="Minhas Respostas" onclick="window.open('minhas_r.php', '_self')">
    <input type="button" value="Terminar sessão" onclick="window.open('logout.php', '_self')">

   <?php
    if(strcmp($_SESSION['nick'], "admin") == 0) {
    ?>    
        <br><h2>Área de Administração</h2><br>
        <input type="button" value="Gerir Utilizadores" onclick="window.open('gerir_u.php', '_self')">
        <input type="button" value="Gerir Posts/Notícias" onclick="window.open('gerir_p.php', '_self')">
        <input type="button" value="Gerir Respostas" onclick="window.open('gerir_r.php', '_self')">
    <?php    
    }
    ?> 
    <br><br>
    <input type="button" value="Sair" onclick="window.open('index.html', '_self');">
</body>
</html>