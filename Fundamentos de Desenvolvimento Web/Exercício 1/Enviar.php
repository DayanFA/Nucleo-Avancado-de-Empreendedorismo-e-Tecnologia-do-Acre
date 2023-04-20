<html>
    <head>
	    <title>Fomulario em PHP       </title>
    </head>
     <body>
      <h1>Retorno do formulario </h1>
         Nome do filme: <?php echo $_POST ["Nome do filme:"]; ?><br>
         Dia que assistiu: <?php echo $_POST ["dia que assistiu"]; ?><br>
         Prioridade para assistir <?php echo $_POST ["prioridader"]; ?><br>
         Gêneros:<?php echo $_POST ["generos"]; ?><br>
         Crítica: <?php echo $_POST ["critica"]; ?><br>
         Código da Lista:	<?php echo $_POST ["codigo da lista"]; ?><br>
         Nota:	<?php echo $_POST ["nota"]; ?><br>
         <marquee> "A mente que se abre a nova ideia, jamais volta, ALberto </marquee>
     </body>
</html>