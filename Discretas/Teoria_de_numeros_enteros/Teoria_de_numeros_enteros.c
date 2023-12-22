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

int euclides(int a, int b){
    int i, r_residuo;
    for (i = 0 ; b != 0; i++){
        r_residuo = a % b;
        a = b;
        b = r_residuo;
    }
    return a;
}

int euclides_ext(int a, int b){
    int i,w; //indice de control
    int s[MAX] = {0},t[MAX] = {0},r[MAX] = {0}, q[MAX] = {0};
    s[0] = 1;
    s[1] = 0;
    t[0] = 0;
    t[1] = 1;
    r[0] = a;
    r[1] = b;
    for (i = 0 ; b != 0; i++){
        r[i] = a % b;
        q[i] = a/b;
        a = b;
        b = r[i];
    }

    for (i = 2; r[i-2] != 0; i++){
        s[i] = s[i-2]-(q[i-2] * s[i-1]);
        t[i] = t[i-2]-(q[i-2] * t[i-1]);
    }

    w = i;
    for (i = 0; i < w; i++)
    {
        printf("r: %d  q: %d s: %d t: %d\n",r[i],q[i],s[i],t[i]);
    }
}