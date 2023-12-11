// Discretas.c : uso de libreias de calculo
//

#include "Discretas.h"

// int **producto_cartenaciano (int set_uno[],  int set_dos[], int tamanio_set_uno, int tamanio_set_dos);

// int main ()
// {
// 	int tamanio = 4;
// 	int tamanio_total = tamanio*tamanio;
// 	int set_uno[4] = {1,2,3,4};
// 	int set_dos[4] = {1,2,3,5};
// 	int resultado[tamanio_total][2];
// 	resultado = producto_cartenaciano(set_uno,set_dos,tamanio, tamanio);
// 	int k;
// 	for ( k = 0; k < tamanio_total; k++)
// 	{
// 		printf("(%d,%d),", resultado[k][0], resultado[k][1]);
// 	}
	


// 	printf("Hello");
// 	return 0;
// }

// int **producto_cartenaciano (int set_uno[],  int set_dos[], int tamanio_set_uno, int tamanio_set_dos) {
// 	int producto[tamanio_set_uno*tamanio_set_dos][2]; // esta cadena contendra el resultado de aplicar producto cartesiano
// 	int i,j; //variables de control

// 	for (i = 0; i < tamanio_set_uno; i++)
// 	{
// 		for (j = 0; j < tamanio_set_dos; j++)
// 		{
// 			producto[i+j][0] = set_uno[i];
// 			producto[i+j][1] = set_dos[j];
// 		}
		
// 	}
	
// 	return producto;
// }