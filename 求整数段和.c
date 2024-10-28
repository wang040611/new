#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    int count = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
        if(i<0){
        printf("   %d",i);
        }else{
        printf("    %d", i);
        }
        count++;
        if (count % 5 == 0) {
            printf("\n");
        }
    }
    if (count % 5!= 0) {
        printf("\n");
    }
    printf("Sum = %d\n", sum);
    return 0;
}