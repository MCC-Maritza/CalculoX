/* Programa Cálculo X
Para el cálculo de x intervienen los valores de b sin in-
crementar y de c decrementado, con lo que el resultado será x igual a 30.

Una expresión de la complejidad de la anterior (CalculoX.c) equivale a calcular la misma
expresión sin operadores ++ y ––, pero incrementando/decrementado antes las
variables afectadas por ++ y –– como prefijo e incrementado/decrementado des-
pués las variables afectadas por ++ y –– como sufijo
*/

#include <stdio.h>

main(){
    float x = 0, a = 15, b = 5, c = 11, d = 4;
    --c; // o bien c--
    x = (a - b) * (c - d) / 2;
    b++;
    printf("x = %g, b = %g, c = %g\n", x, b, c);
}