#include <stdio.h>

int main() {
    int num1, num2;     
    char operator;     
    float result;       
    scanf("%d %d %c", &num1, &num2, &operator);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("%.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
