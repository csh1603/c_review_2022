#include <stdio.h>

int main(void) {
    int n, m;

    scanf("%d", &n);

    for (int i=0 ; i<n ; i++) {
        for (int j=n-1 ; j>i ; j--) {
            printf(" ");
        }
        for(int l=0 ; l<=i ; l++) {
            printf("*");
        }
        printf("\n");
    }
}