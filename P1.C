#include <stdio.h>


int main ()

{

	int estado = 0,i=0;

	char bits[256];

	scanf("%s" , &bits[i]);

	while (bits[i]!= '\0')

	{

		if (estado == 0 && bits [i] == '0')

		{

			estado = 0;

		}

		else if (estado == 0 && bits [i] == '1')

		{

			estado = 1;

		}

		else if (estado == 1 && bits[i] == '0')

		{

			estado = 2;

		}

		else if (estado == 2 && bits [i]=='1')

		{

			estado = estado;

		}

		else if ( estado == 2 && bits [i] == '0')

		{

			estado = 1;

		}

		else if (estado == 1 && bits [i] == '1')

		{

			estado = 0;

		}

		else

		{

			estado = estado;

		}

		i ++ ;

	}

	if (estado == 0){

		printf("\nEh multiplo de 3. ");

	}	

	if(estado !=0){

		printf("\nNao eh multiplo de 3. ");

	}

	printf("\nA sequencia original eh %s" , bits);

	printf("\nO estado eh igual %d", estado);


	return 0;

}
