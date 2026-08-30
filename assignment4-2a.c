#include <stdio.h>
int main() 
{
    int a;
    float b, c;
    printf("Enter a integer number: ");
    scanf("%d", &a);
    
    printf("Enter an floating-point number: ");
    scanf("%f", &b);    
    
    printf("\nImplicit Type Conversion\n");
    
    c = a + b;
    printf("Addition = %.2f\n", c);

    c = a - b;
    printf("Subtraction = %.2f\n", c);
    
    c = a * b;
    printf("Multiplication = %.2f\n", c);
    
    c = a / b;
    printf("Division = %.2f\n", c);
    
    return 0;
}