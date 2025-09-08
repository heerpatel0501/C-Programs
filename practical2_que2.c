#include <stdio.h> 
int main()
{
    float C, F, K;
    printf("Celsius Temperature:", C);
    scanf("%f", &C);
    F = (C*9/5) + 32;
    K = C + 273.15; 

    printf("\nTemperature Celsius = %.2f C", C);
    printf("\nTemperature in Fahrenheit = %.2f F", F);
    printf("\nTemperature in Kelvin = %.2f K", K);
    return 0;

}
