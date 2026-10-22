#include <stdio.h>

void task1()
{
    double a, b, c, max, min;

    printf("请输入三个数字：");
    if (scanf("%lf%lf%lf", &a, &b, &c) != 3) {
        printf("输入无效。\n");
        return;
    }

    max = min = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("最大值：%g\n", max);
    printf("最小值：%g\n", min);
}

void task2()
{
    double profit, bonus;

    printf("请输入当月利润（元）：");
    if (scanf("%lf", &profit) != 1 || profit < 0) {
        printf("输入无效。\n");
        return;
    }

    if (profit <= 100000)
        bonus = profit * 0.10;
    else if (profit <= 200000)
        bonus = 100000 * 0.10 + (profit - 100000) * 0.075;
    else if (profit <= 400000)
        bonus = 100000 * 0.10 + 100000 * 0.075 + (profit - 200000) * 0.05;
    else if (profit <= 600000)
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
    else if (profit <= 1000000)
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600000) * 0.015;
    else
        bonus = 100000 * 0.10 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (profit - 1000000) * 0.01;

    printf("应发奖金：%.2f 元\n", bonus);
}

void task3()
{
    int big, middle, small, count = 0;

    for (big = 1; big <= 33; big++) {
        for (middle = 1; middle <= 50; middle++) {
            small = 100 - big - middle;
            if (small > 0 && 6 * big + 4 * middle + small == 200) {
                printf("大马：%d 匹，中马：%d 匹，小马：%d 匹\n", big, middle, small);
                count++;
            }
        }
    }

    printf("共有 %d 种解法。\n", count);
}

void task4()
{
    unsigned long long grain = 1, total = 0;
    int i;

    for (i = 0; i < 64; i++) {
        total += grain;
        if (i < 63) grain *= 2;
    }

    printf("64 格麦粒总数：%llu 粒\n", total);
    printf("估算体积：%.2e 立方米\n", (double)total / 1.4e8);
}

void task5()
{
    int n, i, j;

    printf("请输入菱形最长行的星号数（正奇数）：");
    if (scanf("%d", &n) != 1 || n <= 0 || n % 2 == 0) {
        printf("请输入正奇数。\n");
        return;
    }

    for (i = 1; i <= n; i += 2) {
        for (j = 0; j < n - i; j++) printf(" ");
        for (j = 0; j < i; j++) printf("* ");
        printf("\n");
    }

    for (i = n - 2; i >= 1; i -= 2) {
        for (j = 0; j < n - i; j++) printf(" ");
        for (j = 0; j < i; j++) printf("* ");
        printf("\n");
    }
}

int main()
{
    int choice;

    do {
        printf("\n第 3 次实验：程序的控制流设计\n");
        printf("1. 输入三个数字，输出最大值和最小值\n");
        printf("2. 计算企业奖金\n");
        printf("3. 百马百担问题\n");
        printf("4. 国际象棋棋盘麦粒问题\n");
        printf("5. 打印菱形\n");
        printf("0. 退出\n");
        printf("请选择：");

        if (scanf("%d", &choice) != 1) return 0;

        switch (choice) {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            case 4: task4(); break;
            case 5: task5(); break;
            case 0: break;
            default: printf("选择错误。\n");
        }
    } while (choice != 0);

    return 0;
}
