//Diego Miranda Duarte 11711EAU019

#include <stdio.h>

void bits(unsigned int numero, int t) //função criada 
{
	if(t != 0) //condição imposta
	{
	bits(numero/2, t-1);// divide numero por 2, t faz andar na string
	printf("%d", (numero % 2));//mostra o resto da divisão feita acima 
	}	
}
int main()
{
	int u, x, y, resultado;//guarda valores
	printf(" 1 = NOT \n 2 = AND \n 3 = OR \n 4 = XOR \n 5 = Right Shift \n 6 = Left Shift");
	printf("\n\n Escolha uma porta logica: ");
	scanf("%d", &u);//guarda a porta logica selecionada
	switch(u)// casos a se escolher e mostrar o que foi escolhido
	{
		case 1:
			printf("\n Digite o numero: ");//recebe valor
			scanf("%d", &x);//guarda o valor e x
			getchar(); // lê um caracter e retorna um inteiro
			printf("\n ARGUMENTO NOT %d", x);
			printf("[");
			bits(x, 32); //chama a conta (numero/2, t-1)
			printf("]");
			resultado=~x; //usa a porta not
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);// chama a conta da função bits (o numero 32 e o numero maximo a ser usado de bits)
			printf("]");
			break;//parada 
			//o mesmo pensamento se seque para as outras portas logicas 
		case 2:
			printf("\n Digite o numero: ");//pega o numero
			scanf("%d", &x);//guarda o valor acima em x 
			getchar();//lê e retorna como inteiro
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);//guarda o valor acima em y
			getchar();
			printf("\n\n%d", x );
			printf("[");
			bits(x, 32);//chama a conta da função bits
			printf("]");
			printf(" ARGUMENTO AND %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x&y; // usa a porta and
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;
		case 3:
			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO OR %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x|y; // usa a porta or 
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;
		case 4:
			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO XOR %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x^y; // usa a porta xor
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;
		case 5:
			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO RIGHT SHIFT >> %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x>>y; //usa a right shift
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;
		case 6:
			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO LEFT SHIFT << %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x<<y; // left shift
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;
	}
	
	return 0;
}
