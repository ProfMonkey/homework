#include <stdio.h>

int main()
{
    printf("1. %d\n", 3 + 4 * 6);
    printf("2. %d\n", 3 * 4 / 6 + 6);
    printf("3. %d\n", 2 * 3 / 12 * 8 / 4);
    printf("4. %d\n", 10 * (1 + 7 * 3));
    printf("5. %d\n", 20 - 2 / 6 + 3);
    printf("6. %d\n", 20 - 2 / (6 + 3));
    printf("7. %d\n", (20 - 2) / 6 + 3);
    printf("8. %d\n", (20 - 2) / (6 + 3));

    printf("9. %8.2f\n", 3.0 + 4.0 * 6.0);
    printf("10. %8.2f\n", 3.0 * 4.0 / 6.0 + 6.0);
    printf("11. %8.2f\n", 2.0 * 3.0 / 12.0 * 8.0 / 4.0);
    printf("12. %8.2f\n", 10.0 * (1.0 + 7.0 * 3.0));
    printf("13. %8.2f\n", 20.0 - 2.0 / 6.0 + 3.0);
    printf("14. %8.2f\n", 20.0 - 2.0 / (6.0 + 3.0));
    printf("15. %8.2f\n", (20.0 - 2.0) / 6.0 + 3.0);
    printf("16. %8.2f\n", (20.0 - 2.0) / (6.0 + 3.0));

    printf("17. %c\n", 'm' - 5);
    printf("18. %c\n", 'm' + 5);
    printf("19. %c\n", 'G' + 6);
    printf("20. %c\n", 'G' - 6);
    printf("21. %d\n", 'b' - 'a');
    printf("22. %d\n", 'g' - 'a' + 1);
    printf("23. %d\n", 'G' - 'A' + 1);

    int choice;
    double temperature;
    printf("\n1. 摄氏温度转华氏温度\n");
    printf("2. 华氏温度转摄氏温度\n");
    printf("请选择：");
    scanf("%d", &choice);
    printf("请输入温度：");
    scanf("%lf", &temperature);

    if (choice == 1)
        printf("华氏温度：%.1f\n", temperature * 9.0 / 5.0 + 32);
    else if (choice == 2)
        printf("摄氏温度：%.1f\n", (temperature - 32) * 5.0 / 9.0);
    else
        printf("选择错误\n");

    return 0;
}
