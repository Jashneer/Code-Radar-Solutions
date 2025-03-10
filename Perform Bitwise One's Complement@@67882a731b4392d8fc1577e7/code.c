#include <stdio.h>

int main() {
    int number, result;
    scanf("%d", &number);
    result = ~number;
    printf("%d\n", result);

    return 0;
}
