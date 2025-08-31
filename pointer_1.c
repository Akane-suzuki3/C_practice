#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 20;
    int *p;  // int型のポインタ変数pを宣言

    p = &a;  // pにaのアドレスを代入
    printf("aのアドレス: %p\n", &a);
    printf("pが指しているアドレス: %p\n", p);
    printf("pが指している値: %d\n\n", *p);

    // pの指す先をbに変更
    p = &b;
    printf("bのアドレス: %p\n", &b);
    printf("pが指しているアドレス: %p\n", p);
    printf("pが指している値: %d\n\n", *p);

    // 配列とポインタ
    int arr[3] = {100, 200, 300};
    int *q = arr; // 配列名は先頭要素のアドレス

    printf("配列arrの先頭アドレス: %p\n", arr);
    printf("qが指しているアドレス: %p\n", q);
    printf("q[0] = %d, q[1] = %d, q[2] = %d\n", q[0], q[1], q[2]);

    // ポインタ演算
    q++;  // 次の要素に進む
    printf("\nポインタを1進めた後:\n");
    printf("qが指しているアドレス: %p\n", q);
    printf("qが指している値: %d\n", *q);

    q--;  // 次の要素に進む
    printf("\nポインタを1戻した後:\n");
    printf("qが指しているアドレス: %p\n", q);
    printf("qが指している値: %d\n", *q);

    q+=2;  // 次の要素に進む
    printf("\nポインタを2進めた後:\n");
    printf("qが指しているアドレス: %p\n", q);
    printf("qが指している値: %d\n", *q);

    return 0;
}
