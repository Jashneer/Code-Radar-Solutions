#include<stdio.h>
#include<math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    scanf("%c", &ch);
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    int divide = a/b;

    switch(ch) {
        case '+' : printf("%d", sum);
                   break;
        case '-' : printf("%d", sub);
                   break;
        case '*' : printf("%d", mul);
                   break;
        case '/' : printf("%d", divide);
                   break;
    }
    return 0;
}