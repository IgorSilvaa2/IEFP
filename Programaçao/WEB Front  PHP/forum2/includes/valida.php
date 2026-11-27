 <?php
 session_start();
	//validação das variaveis de sessão
	if((!isset ($_SESSION['id']) == true) and (!isset ($_SESSION['nick']) == true))
	{
		echo "Erro no acesso!";
		echo "<meta http-equiv='refresh' content='0;url=erro_acesso.html'>";

	}
 ?>

