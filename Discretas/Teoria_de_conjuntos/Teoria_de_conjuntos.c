#include "Teoria_de_conjuntos.h"
#include <math.h>
#include <stdlib.h>

/*cardinality_of_int: Obtein the cardinality of a set of int*/
int cardinalityOfInt(int* A){
    return sizeof(A)/sizeof(A[0]);
}

/*powerSet: obtein the power set of a set*/
int powerSet(int* A){
    // int power_set = (int*)malloc(((int)pow(2,cardinalityOfInt(A)))*sizeof(int));
    return 21;
}

/*conjuntoSinRepeticiones: retorna el arreglo eliminando cualquier repetición de sus elementos*/
int* conjuntoSinRepeticiones(int *arr){
    int tamanio = sizeof(arr)/sizeof(arr[0]);
    int *new_arr = (int*)calloc(tamanio, sizeof(int));
    int i,j, count, flag;
    new_arr[0] = arr[0];
    count = 1;
    for (i = 0; i < tamanio; i++)
    {
        flag = 0;
        for (j = count; j >= 0; j--)
        {
            if (new_arr[j] == arr[i])
            {
                flag = 1;
                j = 0; // sale del ciclo
            }
        }
        if (flag = 0)
        {
            count += 1;
            new_arr[count-1] = arr[i];
        }
    }
    arr = (int*)realloc(*new_arr, sizeof(int)*count);
    return arr;
}