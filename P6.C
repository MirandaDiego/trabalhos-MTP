#include<stdio.h>

int  soma ( int * pt, int * pz)
{	
	retorno (* pz) + ((pz == pt)? 0 : soma (pt, pz- 1 ));
}

int  main ()

{
	int tam;

	printf ( " digite os numeros: \n " );
	scanf ( " % i " , & tam);	
	getchar ();

	int i, val [tam];
	printf ( " digite os valores: \n " );
	para (i = 0 ; i <tam; i ++)

	{
	   scanf ( " % i " e val [i]);	
       getchar ();
	}

	int * primeiro = val, * last = val + tam- 1 ;
	printf ( " \n media =% f \n " , ( float ) soma (primeiro, ultimo) / tam);

	return  0 ;
}
