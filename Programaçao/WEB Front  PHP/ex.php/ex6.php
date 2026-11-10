<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h1>Exemplo de utilização do switch case</h1>
    <?php
    $clube = "FCP";
    switch ($clube) {
        case "FCP":
            echo "O Porto e uma nação";
            break;
        case "SLB":
            echo "O sangue e vermelho com Benfica";
            break;
        case "SCP":
            echo "O mundo e verde e branco";
            break;
        case "BFC":
            echo "As panteras nunca desistem! Boavista";
            break;
        default:
            echo "Não tem clube do coração";
    }
    ?>
</body>
</html>