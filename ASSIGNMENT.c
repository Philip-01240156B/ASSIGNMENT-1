#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float num1, num2;
    
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    //addition
    float sum = num1 + num2;
    printf("%.2f + %.2f = %.2f\n", num1, num2, sum);

    //subtraction
    float difference = num1 - num2;
    printf("%.2f - %.2f = %.2f\n", num1, num2, difference);
 
    //multiplication
    float product = num1 * num2;
    printf("%.2f * %.2f = %.2f\n", num1, num2, product);

    //division
    if (num2 != 0);
        float quotient = num1 / num2;
        printf("%.2f / %.2f = %.2f\n", num1, num2, quotient);
        printf("Error! Division by zero is not allowed.\n");
    return 0;
}
