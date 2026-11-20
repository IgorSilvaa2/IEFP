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
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Forum dos Programadores X - IS</title>
</head>

<body>
    <h1>Forum dos Programadores X - RM</h1>
    <h2>Bem vindo <?php echo htmlspecialchars($_SESSION['nick']); ?></h2>
    <h3>Inserir Posts/Noticias</h3>
    
    <form action="inserir_p2.php" method="post">
        Id do Utilizador: <input type="text" name="id" readonly size="20" value="<?php echo htmlspecialchars($_SESSION['id']); ?>"><br>
        Tema: <input type="text" name="tema" size="50" maxlength="20" required><br>
        Título: <input type="text" name="titulo" size="50" maxlength="20" required><br><br>
        Texto: <br>
        <textarea name="texto" cols="80" rows="3" required></textarea><br><br>
        Foto: <br>
        <textarea name="foto" cols="80" rows="3"></textarea><br><br>
        
        <input type="submit" value="Enviar">
        <input type="reset" value="Limpar">
    </form>
    <br>
    <a href="login2.php">Voltar ao menu</a>
</body>

</html>