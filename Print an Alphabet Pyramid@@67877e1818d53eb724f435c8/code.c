#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) { 
        char ch = 'A'; 
        for (int j = 1; j <= i; j++) { 
            printf("%c ", ch); 
            ch++; 
        }
        printf("\n"); 
    }

    return 0;
}


