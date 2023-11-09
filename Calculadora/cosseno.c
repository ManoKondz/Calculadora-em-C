#include <math.h>
double cosseno(double angulo){
    // a variável "angulo" recebe o valor em graus.
    double resultado, angrad;
    angrad = (angulo * M_PI) / 180;
    // angrad representa o valor do ângulo em radianos.
    resultado = cos(angrad);
    return resultado;
}