#include <stdio.h>

int main(void) {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int c = b%10;
    printf("%d\n", a*c);
    c = (b%100)/10;
    printf("%d\n", a*c);
    c = b/100;
    printf("%d\n%d", a*c, a*b);
}