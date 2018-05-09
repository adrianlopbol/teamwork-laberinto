#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS // para problemas con scanf del visual
int main()
{
	
	char** laberinto = '\0';
	char l;
	int u, x, y, i, j, c, z, n, columna, fila, random;
	
	u = 0;
	c = 0;
	z = 0;
	int en;
	random=0;
	
	// inicio de las posiciones, las definimos
	x=1;
	y=1;
	
	FILE *pf,*pf1;
	printf("Welcome al Laberinto DAJGX, Seleccione la dificultad que desee:\n1)FACIL\n2)MEDIO\n3)DIFICIL\n4)GOD MODE\n5)PARTIDA GUARDADA\nSeleccione el nivel que desee:  ");
	scanf_s("%d", &n);
	while (getchar() != '\n');
	system("cls");
	switch (n)
	
	{
		//Deberemos poner los case
		//case 1 ...........
		//............
	}
}
