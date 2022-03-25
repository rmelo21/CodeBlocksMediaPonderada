
#include <stdio.h>
#include <math.h>

int main () {

    float n1, n2, n3, media;

    printf("\nDigite tres notas numeros!!!\n");

    scanf("%f%*c",&n1);
    scanf("%f%*c",&n2);
    scanf("%f%*c",&n3);

    media = (n1 + n2 + n3) /3;

    printf("\nA media dos valores = %f\n", media);

    getchar();
    return 0;

}
