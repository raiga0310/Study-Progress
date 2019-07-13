#include <stdio.h>
#include <stdlib.h>

/* functions */
int compar(const int *val1, const int *val2);

/* main */
int main(void) {
    int ary[] = {1,4,9,7};
    int n = sizeof(ary) / sizeof(ary[0]);
    int i;

    /* 配列の内容を表示 */
    printf("整列前: ");
    for ( i = 0; i < n; i++ ) {
        printf("%d", ary[i]);
    }

    /* qsort 関数を使用して昇順に並び替える */
    qsort(ary, n, sizeof(int),
        (int (*)(const void *, const void *))compar
    );

    /* 配列の内容を表示 */
    printf("\n整列後: ");
    for ( i = 0; i < n; i++ ) {
        printf("%d", ary[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}

/**
 * 比較関数
 */
int compar(const int *val1, const int *val2) {
    if ( *val1 < *val2 ) {
        return -1;
    } else if ( *val1 == * val2 ) {
        return 0;
    } else {
        return 1;
    }
}