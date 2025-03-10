#include <stdio.h>

int main() {
    int number, position, result; 
    scanf("%d %d", &number, &position);
    result = number | (1 << position);
    printf("%d\n", result);

    return 0;
}
