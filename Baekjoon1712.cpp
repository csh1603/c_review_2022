#include <stdio.h>

int main(void) {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

        if (b >= c) {
            printf("%d", -1);
        }
        else {
            int x = (int)(a/(c-b)) + 1;
            printf("%d", x);
        }

    return 0;
}