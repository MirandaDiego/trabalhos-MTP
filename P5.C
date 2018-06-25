#include < stdio.h >

int  main ()
{
	int j, i, num [ 64 ], * pnum;
	char msg [ 256 ], * pmsg;

	para (i = 0 ; i < 256 ; i ++) msg[i] = ' \0 ' ;
	printf ( " \t 1Codificar \n \t 2Decodificar \n \t Escolha uma: " );
	scanf ( " %d " , &j);
	getchar ();

	interruptor (j)
	{

		case  1 : {
			printf ( " \t Digite um fraseão com 255 caracteres: \n \n \t " );
			Obtém (msg);
			char * pmsg = msg;
			printf ( " \n \t Frase codificada: \n \t \t " );

			para (i = 0 ; msg [i]; i ++) {
				pnum = ( int *) pmsg;
				if (pnum [i]!= 0 ) printf ( " %d " , pnum [i]);
				if (pnum [i + 1 ]!= 0 ) printf ( " , " );}
			pausa ;
		}

		caso  2 :
		{
			printf ( "\t Digitar os numeros com 64 digitos, sendo o ultimo (64) entre 1 e " " 4095 !!! \n    \t \t Obs: Digite 0 p/ finalizar a entrada \n \n \n " );

			para (i = 0 ; i < 64 ; i ++)
			 {
				printf ( " \n%d: \n  " , i + 1 ); scanf ( " %d " , & num [i]);
				pmsg = ( char *) num;
				if (num [i] == 0 )
				pausa ;
			 }

			 printf ( " \n \n \n Frase decodificada:% s " , pmsg);
	    }

	}
	return  0 ;
}
