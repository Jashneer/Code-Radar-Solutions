#include<stdio.h>
#include<math.h>

int main() {
    int a, b;
    int sum;
    int sub;
    int mul;
    int divide;
    char ch;
    scanf("%d %d", &a, &b);
    scanf("%c", &ch);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    divide = a/b;

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