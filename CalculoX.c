/* Programa Cálculo X
Para el cálculo de x intervienen los valores de b sin in-
crementar y de c decrementado, con lo que el resultado será x igual a 30.
*/


main() {
    float x = 0, a = 15, b = 5, c = 11, d = 4;
    x = (a - b++) * (--c - d) / 2;
    printf("x = %g, b = %g, c = %g\n", x, b, c);
}