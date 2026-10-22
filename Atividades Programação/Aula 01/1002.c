
#include <stdio.h>

int main()
{
    double n, area, raio, raio_quadrado;
    
    n =  3.14159;
    
    scanf("%lf", &raio);
    
    raio_quadrado = raio * raio;
    
    area = n * raio_quadrado;
    
    printf("A=%.4lf\n", area);
    
    
    return 0;
}
