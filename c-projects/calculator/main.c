#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valueOne;
    float valueTwo;
    char operator;
    float result;

    printf("\n\n\n\t\t\tSimple Calcultation\n");
    printf("\n\n\n\t\t\tEnter Calculation: ");
    scanf("%f %c %f", &valueOne, &operator, &valueTwo);

    switch(operator) {
    case '/' :
        result = valueOne / valueTwo;
        break;

    case '*' :
        result = valueOne * valueTwo;
        break;

    case '+' :
        result = valueOne + valueTwo;
        break;

    case '-' :
        result = valueOne - valueTwo;
        break;

    case '^' :
        result = pow(valueOne, valueTwo);
        break;
    }

    printf("\n\n\t\t\t%.9g %c %.9g = %.6g\n\n", valueOne, operator, valueTwo, result);
    goto exit;

    fail: printf("Invalid Your Number\n");
    exit: return 0;

    return 0;
}
