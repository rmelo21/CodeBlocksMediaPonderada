
#include <stdio.h>
#include <math.h>

int main () {

    float n1, n2, n3, mediaPonderada;
    int p1, p2, p3;

    printf("\nDigite tres notas!!!\n");

    scanf("%f%*c",&n1);
    scanf("%f%*c",&n2);
    scanf("%f%*c",&n3);

    printf("\nDigite os pesos das notas respectivamente!!!\n");

    scanf("%d%*c",&p1);
    scanf("%d%*c",&p2);
    scanf("%d%*c",&p3);

    mediaPonderada = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
    /*                    1           4            9         1    2   3

                                    14                          6
                                                2,333333

    */

    printf("\nA media ponderada dos valores = %f\n", mediaPonderada);

    getchar();
    return 0;

}
