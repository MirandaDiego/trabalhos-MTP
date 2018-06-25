# include  < stdio.h >



 preenche void ( char bits [])

{

	printf ( " \ n Preencha com valor o um convertido ser: " );

	scanf ( " % s " , bits);

}

int  conv2oct ( int num, int b)

{

    int aux = 0 , i = 1 ;

    enquanto (num! = 0 )

    {

        aux + = (num% b) * i;

        num / = b;

        i * = 10 ;

    }

    return aux;

}

void  conv2hex ( int num, int b, int menu)

{

	int i = 0 , j = 0 , k = 0 , aux = 0 , n = 0 ;

	char hex [ 256 ], temp [ 256 ];

	k = num;

	enquanto (k! = 0 )

	{

		aux = k% b;

		se (aux < 10 )

			temp [j ++] = 48 + aux;

		outro

		    temp [j ++] = 55 + aux;

		k = k / b;

		n ++;

	}

	para (i = n- 1 , j = 0 ; i + 1 ! = 0 ; --i, ++ j)

		hex [j] = temp [i];

	hex [n] = ' \ 0 ' ;

	printf ( " \ n | \" % i \ " + \" % i \ " | \" % s \ " | \ n " , menu, num, hex);

}

int  conv2dec ( char bits [], int b)

{

	int i = 0 , aux = 0 ;

	para (i = 0 ; bits [i]! = ' \ 0 ' ; i ++)

	{

	    if (bits [i] <= 57 && bits [i]> = 48 )

	    {

            aux = aux * b + (bits [i] - ' 0 ' );

	    }

        else  if (bits [i]> = 65 )

        {

            {

        	    if (bits [i]> = 97 )

    	        {

    	        	bits [i] - = 32 ;

    	        	aux = aux * b + (bits [i] - ' 7 ' );

				}

    	        outro

        	        aux = aux * b + (bits [i] - ' 7 ' );

		    }

	    }

    }

    return aux;

}

int  conv2bin ( int num, int b)

{

	caractere bin [ 256 ];

	inti = 0 , j = 0 , k = 1 , n = 0 , aux = 0 , aux2;

	para (n = 0 ; num> = ( 1 << n); n ++);

	para (i = 1 ; i <= n; i ++)

	{

		if (num% 2 == 0 )

		{

			bin [ni] = ' 0 ' ;

			num = num / 2 ;

		}

		outro

		{

			bin [ni] = ' 1 ' ;

			num = (num- 1 ) / 2 ;

		}

	}

	para (i = 0 ; bin [i]! = ' \ 0 ' ; i ++)

	{

		k = 1 ;

		para (j = 1 ; j <(ni); j ++)

		    k = k * b;

		aux + = (bin [i] - ' 0 ' ) * (k);

	}

    return aux;

}

int  main ()

{

	bits de char [ 256 ];

	int menu = 0 , b = 0 , cv = 0 , num = 0 , teste = 0 ;

	Faz

	{

		printf ( " \ n Escolha uma conversao: \ n [1] Binario para Decimal \ n [2] Binario para Hexadecimal \ n [3] Hexadecimal para Decimal \ n [4] Hexadecimal para Binario \ n [5] Decimal para Binario \ n [6] Decimal para Hexadecimal \ n [7] Octal para Decimal \ n [8] Decimal para Octal \ n [9] Sair do programa \ n : " );

		scanf ( " % i " , & menu);

		interruptor (menu)

		{

			case  1 : // Bin -> Dec

				b = 2 ;

				preenche (bits);

                cv = conv2dec (bits, b);

				printf ( " \ n | \" % i \ " + \" % s \ " | \" % i \ " | \ n " , menu, bits, cv);

				pausa ;

			case  2 : // Bin -> Hex

			    b = 2 ;

			    preenche (bits);

			    num = conv2dec (bits, b);

			    b = 16 ;

                conv2hex (num, b, menu);

				pausa ;

			case  3 : // Hex -> Dec

				b = 16 ;

				preenche (bits);

                cv = conv2dec (bits, b);

				printf ( " \ n | \" % i \ " + \" % s \ " | \" % i \ " | \ n " , menu, bits, cv);

				pausa ;

			case  4 : // Hex -> Bin

				b = 16 ;

				preenche (bits);

				num = conv2dec (bits, b);

				b = 10 ;

				cv = conv2bin (num, b);

				printf ( " \ n | \" % i \ " + \" % s \ " | \" % i \ " | \ n " , menu, bits, cv);

				num = 0 ;

				pausa ;

			case  5 : // Dec -> Bin

				b = 10 ;

				printf ( " \ n Preencha com valor o um convertido ser: " );

	            scanf ( " % i " , & num);

                cv = conv2bin (num, b);

				printf ( " \ n | \" % i \ " + \" % i \ " | \" % i \ " | \ n " , menu, num, cv);

				pausa ;

			case  6 : // Dec -> Hex

			    b = 16 ;

			    printf ( " \ n Preencha com valor o um convertido ser: " );

	            scanf ( " % i " , & num);

                conv2hex (num, b, menu);

				pausa ;

			case  7 : // Oc -> Dez

				b = 8 ;

				preenche (bits);

                cv = conv2dec (bits, b);

				printf ( " \ n | \" % i \ " + \" % s \ " | \" % i \ " | \ n " , menu, bits, cv);

				pausa ;

			caso  8 : // Dez -> Oc

			    b = 8 ;

			    printf ( " \ n Preencha com valor o um convertido ser: " );

            	scanf ( " % i " , & num);

			    cv = conv2oct (num, b);

			    printf ( " \ n | \" % i \ " + \" % i \ " | \" % i \ " | \ n " , menu, num, cv);

				pausa ;

			padrão :

			    se (menu! = 9 )

			    {

			    	printf ( " \ n \ n Escolha invalida \ n \ n " );

			        pausa ;

				}

		}

	} enquanto (menu! = 9 );

	return  0 ;

}