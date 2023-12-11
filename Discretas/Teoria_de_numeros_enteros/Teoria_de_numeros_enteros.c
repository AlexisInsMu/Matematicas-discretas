#include "Teoria_de_numeros_enteros.h"

int mcd(int A, int B)
{
    int residuo;
    while (B != 0)
    {
        residuo = A % B;
        A = B;
        B = residuo;
    }
    return A;
}

int inverso_modular(int valor, int modulo){
    int i;
    int inverso;
    for (i = 0; i < modulo; i++)
    {
        if((valor * i) % modulo == 1){
            return i;
        }
    }
    return 0;
}