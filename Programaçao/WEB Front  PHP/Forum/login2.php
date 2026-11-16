<?php session_start(); ?>
<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Forum dos Programadores X - RM</title>
</head>

<body>
    <h1>Forum dos Programadores X - RM</h1>
    <h2>Bem vindo <?php echo $_SESSION['nick']; ?></h2>

    <a href="editarperfil.php">Editar Perfil</a> <br>
    <a href="inserir_p.php">Inserir Post/notícia</a> <br>
    <a href="listar_p.php">Listar Posts/notícias</a> <br>
    <a href="meus_p.php">Meus Posts/notícias</a> <br>
    <a href="minhas_r.php">Minhas Respostas</a> <br>
    <a href="logout.php">Terminar sessão</a> <br>

</body>

</html>