#include <stdio.h>
int save_matrix(int columns, int rows, int matrix[columns][rows]){
	int l,p;
	 for (l=1;l<=columns;l++){
        for (p=1; p<=rows;p++){
            printf("[%i][%i]: ",l,p);
            scanf("%i",& matrix[l][p]);
        };
    };
	return 0;
	};

int matrix_display(int nColums, int nRows, int matrix[nColums][nRows]){
    int l,p;
    for (l=1;l<=nColums;l++){
        for (p=1; p<=nRows;p++){
            printf("%5i",matrix[l][p]);
        };
         printf("\n");
    };
    return 0;
  };
  
int main (void){
	 int i,j,k,o,num;
	 printf("MULTIPLICADOR DE MATRICES\n\n");
	 printf("Tamaño de la matrix numero 1: \n");
	 printf("Filas:\n"); scanf("%i", &i); 
	 printf("columnas:\n"); scanf("%i", &j);
     printf("Tamaño de la matrix numero 2: \n");
     printf("filas:\n"); scanf("%i", &k); 
	 printf("columnas:\n"); scanf("%i", &o);
     //por si no se pueden multiplicar :)
      while (j != k){
		  printf("No se pueden multiplicar las matrices. Intentalo de nevo\n");
		  printf("Tamaño de la matrix numero 1: \n");
		 printf("Filas:\n");scanf("%i", &i); printf("Columnas: \n");  scanf("%i", &j);
		  printf("Tamaño de la matrix numero 2: \n");
		  printf("Filas:\n");scanf("%i", &k); printf("Columnas: \n");  scanf("%i", &o);
		};
		 int matrix[i][j];
		 int matriz[k][o];
		 int matriz_resp[i][o];
    //asignar datos a las matrices 
    printf("Datos de la matriz 1:\n");
	save_matrix(i,j,matrix);
    printf("Datos de la matriz 2:\n");
    save_matrix(k,o, matriz);
    //imprimir matrices 
    printf("Primera matriz\n");
    matrix_display(i,j,matrix);
    printf("segunda matriz\n");
    matrix_display(k,o,matriz);
    //multiplicacion de matrices
    num=1;
    /*
    for (i=1;i=j; i++){
		matrix[]matrix[num][i]*matriz[i][num]
		num++;
		};
		* */
    
return 0;
};
