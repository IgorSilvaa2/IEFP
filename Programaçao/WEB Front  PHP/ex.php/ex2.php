<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title> Segundo script php - RM</title>
</head>

<body>
    <?php
    $nome = "Igor";
    $local = "Porto";
    $idade = 30;
    $altura = 1.70;
    ?>
    <h1>Olá bem-vindo, <?php echo $nome; ?></h1>
    <h2>Moras no <?php echo $local; ?></h2>
    <?php
    echo "<h3> Tem " . $idade . "anos</h3>";
    ?>
    <h4>Tens <?php echo $altura ?> de altura</h4>

</body>

</html>