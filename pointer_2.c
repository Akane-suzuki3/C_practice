#include <stdio.h>

// 値をコピーして受け取る版（失敗例）
void swap_copy(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// ポインタを使う版（成功例）
void swap_pointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 10, b = 20;

    printf("初期値: a=%d, b=%d\n", a, b);

    // 値渡し（変わらない）
    swap_copy(a, b);
    printf("swap_copy後: a=%d, b=%d (変更無)\n", a, b);

    // ポインタ渡し（実際に変わる）
    swap_pointer(&a, &b);
    printf("swap_pointer後: a=%d, b=%d (入れ替わり)\n", a, b);

    return 0;
}
