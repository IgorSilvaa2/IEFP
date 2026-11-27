<!DOCTYPE html>
<html lang="en">
<head>
    <meta http-equiv="refresh" content="3;login2.php">
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Forum dos Programadores - BA</title>
</head>
<body>
    <h1>Forum dos Programadores - BA</h1>
    <h2>Terminar Sessão</h2>
    <?php
    session_start();
    $SESSTION = array();
    session_destroy();
    ?>
    <h2>Sessão terminada com sucesso!</h2>
    <br><br>
    <input type="button" value="Sair" onclick="window.open('index.html','_self');">
</body>
</html>