#include <stdio.h>

int main() {
    int num1, num2, result; 
    scanf("%d %d", &num1, &num2);
    result = num1 | num2;
    printf("Result of bitwise OR: %d\n", result);

    return 0;
}
