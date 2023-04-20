<html>
    <head>
	   <title>Minha primeira pagina PHP </title>
	</head>
	<body>
	     Veja que aqui é HTML com 
            <?php
            echo("<strong>PHP, </strong>");
			echo("<p>");
            ?>
		  
		    <font face="verdana"> Voltando para HTML </font>
		    <p>
		    <?php  
		       function hello() {
			        echo "hello world!";
					}
					hello (); // chamada da função
			
			        echo "<p>";
					
					//Utilizando variáveis em php
					
					$cor= "blue";
					$Cor= "rosa";
					echo "meu carro é <font color=". $cor . ">" . $cor  ."</font><br>";
					echo "minha cassa é" . $Cor . "<br>";
					echo "meu barco é" . $cor . "<br>";
			?>
			
			<?php 
			    $txt1= "Aprenda PHP";
				$txt2= "W3Schools.com";
				$x= 5;
				$y= 4;
				
				print "<h2>" .$txt1 . "</h2>";
				print "Estude PHP em" . $txt2 . "<br>";
				print $x + $y;
		     ?>
		     <?php
			    //Trabalho com strings
				$meutexto = "Maria";
				$meutexto2 = "Univerdidade Federal do Acre e Samsung com você ba N.A.V.E";
				echo ("Maria ao contrário:");
				echo strrev ($meutexto);
				echo "<p>Contador de Palavras:";
				echo str_word_count("$meutexto2");
			?>	
				
				
				
				
			 
	</body>
	
</html>		 