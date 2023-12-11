#include <stdio.h>
#include <stdlib.h>
#include "Teoria_de_numeros_enteros.h"

int main()
{
    int num_congruencias, modulo_total = 1;
    int valor_a_buscar = 0;
    int *modulos;
    int *constantes;
    int *inversos_constantes;
    scanf(" %d", &num_congruencias);

    modulos = (int *)malloc(num_congruencias * sizeof(int));

    constantes = (int *)malloc(num_congruencias * sizeof(int));

    inversos_constantes = (int *)malloc(num_congruencias * sizeof(int));

    int i; // contador
    for (i = 0; i < num_congruencias; i++)
    {
        printf("Dame un modulo \n");
        scanf(" %d", &modulos[i]);
        printf("Dame la constante \n");
        scanf(" %d", &constantes[i]);
        printf("la congruencia lineal es: x == %d (mod %d) \n", constantes[i], modulos[i]);
        modulo_total *= modulos[i];
    }

    printf("Modulo total es:  %d \n", modulo_total);
    int m;

    for (i = 0; i < num_congruencias; i++) {
        m = modulo_total/modulos[i];
        inversos_constantes[i] = inverso_modular(m, modulos[i]);
        printf("%d\n", inversos_constantes[i]);
        valor_a_buscar += (constantes[i]*m*inversos_constantes[i]) % modulo_total;
    }

    valor_a_buscar %= modulo_total;

    printf("El valor que buscabamos es:  %d", valor_a_buscar);
}