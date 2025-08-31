#include <stdio.h>

int main(void) {
    int age;
    double height;

    printf("年齢を入力してください: ");
    scanf("%d", &age);

    printf("身長を入力してください (cm): ");
    scanf("%lf", &height);

    printf("\n--- 入力結果 ---\n");
    printf("年齢: %d歳\n", age);
    printf("身長: %.1f cm\n", height);

    return 0;
}
