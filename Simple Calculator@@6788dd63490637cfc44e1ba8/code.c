#include <stdio.h>

int main() {
    int num1, num2;  
    char operator;   
    int result;      
    scanf("%d %d %c", &num1, &num2, &operator);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d\n", result);
            } else {
                printf("Error\n");
            }
            break;
        default:
            printf("Error\n");
    }

    return 0;
}

