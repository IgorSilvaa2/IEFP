<?php
session_start();

if (!isset($_SESSION['id'])) {
    header("Location: index.html");
    exit();
}

$ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
if (!$ligacao) {
    die("Erro na ligação: " . mysqli_connect_error());
}

// Seleciona todos os posts que não estão apagados (apagado = 0)
// Usando INNER JOIN para ir buscar o nick do utilizador numa única query (como sugerido no guião, pág. 7)
$sql = "SELECT t_post.*, t_user.nick 
        FROM t_post 
        INNER JOIN t_user ON t_post.id_user = t_user.id 
        WHERE t_post.apagado = 0 
        ORDER BY t_post.id DESC";

$resultado = mysqli_query($ligacao, $sql) or die(mysqli_error($ligacao));
$numreg = 0;
?>
<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Listar Posts</title>
</head>

<body>
    <h1>Listagem de Posts</h1>
    <hr>
    <?php
    while ($linha = mysqli_fetch_assoc($resultado)) {
        echo "<h3>Id: " . htmlspecialchars($linha['id']) . "</h3>";
        echo "<b>Tema:</b> " . htmlspecialchars($linha['tema']) . "<br>";
        echo "<b>Título:</b> " . htmlspecialchars($linha['titulo']) . "<br>";
        echo "<b>Texto:</b> " . nl2br(htmlspecialchars($linha['texto'])) . "<br>";


        if (!empty($linha['foto'])) {
            echo "<b>Foto:</b><br><img src='" . htmlspecialchars($linha['foto']) . "' height='100'><br><br>";
        } else {
            echo "<br>";
        }

        echo "<h3>Nick: " . htmlspecialchars($linha['nick']) . "</h3>";
        ?>
        <form action="inserirR.php" method="post">
            <input type="hidden" value="<?php echo htmlspecialchars($linha['id']); ?>" name="id_post">
            <input type="submit" value="Ver Respostas / Responder">
        </form>
        <hr>
        <?php
        $numreg++;
    }

    echo "<p><b>N. de Postagens:</b> " . $numreg . "</p>";
    mysqli_close($ligacao);
    ?>
    <br>
    <input type="button" value="Voltar ao menu" onclick="window.location.href='login2.php'">
</body>

</html>