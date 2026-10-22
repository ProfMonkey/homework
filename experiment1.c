#include <stdio.h>

int main()
{
    int a, b;

    printf("Hello world\n");

    printf("Program 1.1\n");
    printf("请输入两个整数：");
    scanf("%d%d", &a, &b);
    printf("a+b=%d\n", a + b);
    printf("a-b=%d\n", a - b);
    printf("a*b=%d\n", a * b);
    printf("a/b=%d\n", a / b);

    return 0;
}
