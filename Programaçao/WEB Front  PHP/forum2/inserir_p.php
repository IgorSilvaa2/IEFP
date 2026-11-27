<?php
include 'includes/valida.php';
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Forum dos Programadores - BA</title>
</head>
<body>
    <h1>Inserir Posts - BA</h1>
    <form action="inserir_p2.php" method="post" name="f1">
        Id user: <input type="text" size="20" maxlength="20" name="id" readonly value="<?php echo $_SESSION['id']?>"><br><br>
        Tema: <input type="text" size="20" maxlength="50" name="tema" required>
        Título: <input type="text" size="100" maxlength="100" name="titulo" required>
        Texto: <textarea cols="80" rows="4" name="texto" required></textarea>
        Foto: <textarea cols="80" rows="4" name="foto"></textarea>
        <br><br>
        <input type="submit" value="Colocar Post">
        <input type="reset" value="Limpar">
        <input type="button" value="Voltar" onclick="window.history.go(-1);">
    </form>
    <br>
    <input type="button" value="Voltar ao Login" onclick="window.open('index.html','_self');">
</body>
</html>