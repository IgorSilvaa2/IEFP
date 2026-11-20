<html>
    <head>
        <meta charset="UTF-8">
        <meta http-equiv="refresh" content="5;url=index.html" />
        <link rel="stylesheet" href="style.css">
        <title>FORUM DO FRONTEND</title>
    </head>
    <body>

<?php
    session_start();
    // Apaga todas as variáveis da sessão
    $_SESSION = array();
    // Finalmente, destrói a sessão
    session_destroy();
?>
<h2 align="center">Sessão Terminada com sucesso!</h2>

<input type="button" value="Voltar ao início" onclick="window.open('index.html','_self')">
    </body>
</html>