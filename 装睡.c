#include <stdio.h>

#define MAX_NAME_LENGTH 100 // 定义最大名字长度

int main() {
    int N, huxi, maibo;
    char name[MAX_NAME_LENGTH]; // 修改为字符数组

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf(" %s %d %d", name, &huxi, &maibo); // 修改scanf格式
        if (huxi > 20 || huxi < 15 || maibo > 70 || maibo < 50) {
            printf("%s\n", name); // 修改printf格式
        }
    }
    return 0;
}