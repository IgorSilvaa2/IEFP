<?php session_start(); ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta http-equiv="refresh" content="60;login2.php">
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Forum dos Programadores - BA</title>
</head>
<body>
    <h1>Forum dos Programadores - BA</h1>
    <h2>Editar Perfil</h2>
    <hr>
    <?php
    $ligacao = mysqli_connect("127.0.0.1", "root", "", "bd_forum");
    
    if($ligacao->connect_error) {
        die(mysqli_error($ligacao));
    }
    $sql = "SELECT * FROM t_user WHERE id = " . $_SESSION['id'];
    $resultado = mysqli_query($ligacao, $sql) or die (mysqli_error($ligacao));
    $linha = mysqli_fetch_assoc($resultado);
    ?>
    <hr>
    <form action="editarperfil2.php" method="post">
    <p>Id: <input type="text" name="id" size="5" value="<?php echo $linha['id']?>" readonly></p>
    <p>Nick: <input type="text" name="nick" size="20" maxlength="20" value="<?php echo $linha['nick']?>" required></p>        
    <p>Nome: <input type="text" name="nome" size="80" maxlength="100" value="<?php echo $linha['nome']?>" required></p>
    <p>Email: <input type="text" name="email" size="50" maxlength="50" value="<?php echo $linha['email']?>" required></p>
    <p>Data de Nascimento: <input type="date" name="data_nasc" size="10" maxlength="10" value="<?php echo $linha['data_nasc']?>" required></p>
    <p>Password: <input type="password" name="pass" size="20" maxlength="20" value="<?php echo $linha['pass']?>" required></p>
    <p>Foto(url): <br><textarea name="foto" cols="80" rows="4"><?php echo $linha['foto']?></textarea>
    <br><br>
    <input type="submit" value="Alterar">
    <input type="reset" value="Limpar">
    <input type="button" value="Cancelar" onclick="window.history.go(-1);">
    </form>
    <?php
    mysqli_close($ligacao);
    ?>
    <a href="login2.php" target="self">Voltar</a>
</body>
</html>