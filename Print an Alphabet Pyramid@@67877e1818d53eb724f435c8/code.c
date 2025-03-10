#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        char ch = 'A';
        for (int k = 1; k <= i; k++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n"); 
    }

    return 0;
}
