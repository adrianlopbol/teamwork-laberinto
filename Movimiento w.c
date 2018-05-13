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
		case 1:
		{
			fila=0;
			columna=0;
			pf=fopen("Labfac1.txt","r");
			fscanf(pf,"%d",&fila);
			fscanf(pf,"%d",&columna);
			fgetc(pf);
			laberinto = (char**)malloc(fila * sizeof(char*));
			if ('\0' == laberinto)
			{
			printf(stderr, "Problemas al reservar la memoria\n");
			return(-1);
			for ( en = 0; en < fila; en++)
				{
					laberinto[en] = (char*)malloc((columna + 1) * sizeof(char));
					if ('\0' == laberinto[en]) 
					{
						fprintf(stderr, "Problemas al reservar la memoria\n");
						return(-1);
					}
					laberinto[en][columna] = '\0';
				}

			for (i = 0; i < fila; i++)
			{
				fgets(laberinto[i], columna + 1, pf);
				while (fgetc(pf) != '\n') {}
			}
			fclose(pf);
			break;
			}
		}
	}
	
	while(1){
		
		if(u == 1){
			system("cls");
			printf("\nEnhorabuena. Has llegado a la meta\n\n");
			break;
		}
		
		for(i = 0; i < fila; i++){
			for(j = 0; j < columna; j++)
				printf("%c", laberinto[i][j]);
				
			printf("\n");
		}
		
		laberinto[x][y] = '*';
		c++;
		printf("\n");
		scanf_s("%c", &1);
		while(getchar() != '\n');
		
		switch(1){
			case 'w':
				if(laberinto[x - 1][y] == ' '){
					system("cls");
					laberinto[x][y] = ' ';
					x = x - 1;
					laberinto[x][y] = '*';
					
					for(i = 0; i < fila; i++){
						for(j = 0; j < columna; j++)
							printf("%c", laberinto[i][j]);
							
						printf("\n");
					}
					
					system("cls");
					break;
				}
				
				else if(laberinto[x -1][y] == '@'){
					u = 1;
					break;
				}
				
				else{
					printf("\a");
					z++;
					c--;
					system("cls");
					break;
				}
		}
	}
}
