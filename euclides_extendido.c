#include <stdio.h>
#include <stdlib.h>
#include "Teoria_de_numeros_enteros.h"


int main()
{
    int a, b;

    printf("Pon dos numeros distintos mayores de 2\n");
    printf("Dame un numero\n");
    scanf("%d", &a);
    printf("Dame otro numero\n");
    scanf("%d", &b);

    if(a==b){
        printf("no puedes meter dos nuemros iguales\n");
    }else if (abs(a)>abs(b)) {
        euclides_ext(a,b);
    } else {
        printf("%d",euclides(abs(a),abs(b)));
    }
    return 0;
}