#include <stdio.h>

int main() {
    int number, position, result; 
    scanf("%d %d", &number, &position);
    int mask = ~(1 << position);
    result = number & mask;
    printf("%d\n", result);

    return 0;
}
