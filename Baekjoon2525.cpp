#include <stdio.h>

int main(void) {
    int h, m, a;

    scanf("%d %d", &h, &m);
    scanf("%d", &a);

    m = m+a;
    if (m>60) {
       h = h + 1;
       m = m - 60;
       if(h >23) {
        h = h-24;
       }
    }
    printf("%d %d", h, m);
}