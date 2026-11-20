<?php
session_start();

if (!isset($_SESSION['id'])) {
    header("Location: index.html");
    exit();
}

// Guarda o id_post na sessão para não se perder quando a página recarregar após responder
if (isset($_POST['id_post'])) {
    $_SESSION['id_post_atual'] = (int) $_POST['id_post'];
} elseif (!isset($_SESSION['id_post_atual'])) {
    header("Location: listar_p.php");
    exit();
}

$id_post = $_SESSION['id_post_atual'];

$ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
if (!$ligacao) {
    die("Erro na ligação: " . mysqli_connect_error());
}

// 1. Vai buscar os dados do Post principal e o nick do autor
$stmt = $ligacao->prepare("SELECT t_post.*, t_user.nick 
                           FROM t_post 
                           INNER JOIN t_user ON t_post.id_user = t_user.id 
                           WHERE t_post.id = ?");
$stmt->bind_param("i", $id_post);
$stmt->execute();
$resultado = $stmt->get_result();
$linha = $resultado->fetch_assoc();

if (!$linha) {
    $stmt->close();
    mysqli_close($ligacao);
    die("Post não encontrado.");
}
?>
<!DOCTYPE html>
<html lang="pt">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Ver Respostas / Responder</title>
</head>

<body>
    <h1>Post e Respostas</h1>
    <?php
    // Mostra o Post Principal
    echo "<h3>Id: " . htmlspecialchars($linha['id']) . "</h3>";
    echo "<b>Tema:</b> " . htmlspecialchars($linha['tema']) . "<br>";
    echo "<b>Título:</b> " . htmlspecialchars($linha['titulo']) . "<br>";
    echo "<b>Texto:</b> " . nl2br(htmlspecialchars($linha['texto'])) . "<br>";

    if (!empty($linha['foto'])) {
        echo "<b>Foto:</b><br><img src='" . htmlspecialchars($linha['foto']) . "' height='100'><br><br>";
    } else {
        echo "<br>";
    }
    echo "<h3>Autor: " . htmlspecialchars($linha['nick']) . "</h3><br>";
    $stmt->close();

    // 2. Vai buscar todas as respostas ativas (apagado = 0) deste post
    $stmtResp = $ligacao->prepare("SELECT t_resp.*, t_user.nick 
                                   FROM t_resp 
                                   INNER JOIN t_user ON t_resp.id_user = t_user.id 
                                   WHERE t_resp.apagado = 0 AND t_resp.id_post = ? 
                                   ORDER BY t_resp.id ASC");
    $stmtResp->bind_param("i", $id_post);
    $stmtResp->execute();
    $respostas = $stmtResp->get_result();
    $numresp = 0;

    echo "<table>";
    echo "<tr><th>Resposta</th><th>Foto</th><th>Utilizador</th></tr>";
    while ($linhaResp = $respostas->fetch_assoc()) {
        echo "<tr>";
        echo "<td>" . nl2br(htmlspecialchars($linhaResp['texto'])) . "</td>";
        echo "<td>";
        if (!empty($linhaResp['foto'])) {
            echo "<img src='" . htmlspecialchars($linhaResp['foto']) . "' height='100'>";
        } else {
            echo "Sem foto";
        }
        echo "</td>";
        echo "<td>" . htmlspecialchars($linhaResp['nick']) . "</td>";
        echo "</tr>";
        $numresp++;
    }
    echo "<tr><td colspan='3'><b>Total de respostas: " . $numresp . "</b></td></tr>";
    echo "</table>";

    $stmtResp->close();
    mysqli_close($ligacao);
    ?>

    <hr>
    <h2>Responder ao Post</h2>
    <form action="inserir_r2.php" method="POST" name="f1">
        <input type="hidden" name="id_user" value="<?php echo htmlspecialchars($_SESSION['id']); ?>">
        <input type="hidden" name="id_post" value="<?php echo htmlspecialchars($id_post); ?>">

        <p>Texto:<br><textarea cols="80" rows="4" name="texto" required></textarea></p>
        <p>Foto (URL):<br><textarea cols="80" rows="4" name="foto"></textarea></p>

        <input type="submit" value="Responder">
        <input type="reset" value="Limpar">
        <input type="button" value="Voltar" onclick="window.location.href='listar_p.php'">
    </form>
</body>

</html>