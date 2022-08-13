#include <stdio.h>

int main (void) {
    int a, b, v, n;

    scanf("%d %d %d", &a, &b, &v);

    n = (v-b-1) / (a-b) + 1;

    printf("%d", n);

    return 0;
}