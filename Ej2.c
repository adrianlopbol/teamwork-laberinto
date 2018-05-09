// Ejercicio 2 - Tema3 - Bucles

#include<stdio.h>
int main()
{
	int n,i,suma;
	do
	{
	printf("Introduzca un valor de separacion entre numeros:\n");
	scanf("%d",&n);
	}
	while(n<1);
	
	for(i=0;i<=100;i=i+n)
	printf("%d\n",i);
	return 0;
	// cambio sin utlidad
}

