#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    scanf("%s", &s);
    int len = strlen(s);
    int num2 = 0;
    int count2 = 0;
    double p1 = 1.0, p2 = 1.0;
    for (int i = 0; i < len; i++)//计算2的个数
    {
        if (s[i] == '2')
            count2++;
    }
    if (s[0] == '-')   p1 += 0.5;    //为负数时

    if (s[len - 1] % 2 == 0) p2 += 1;  // 为偶数时

    if (s[0] == '-')
        printf("%.2f%%", 1.0 * count2 / (len - 1) * p1 * p2 * 100);
    else
        printf("%.2f%%", 1.0 * count2 / len * p1 * p2 * 100);

    return 0;
}
