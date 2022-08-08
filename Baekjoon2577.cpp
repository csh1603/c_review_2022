//미완성

#include <stdio.h>

int main(void) {
    int arr[9];
    int a, b, c, count;

    for(int t=0 ; t<9 ; t++) {

    }

    for (int i=0 ; i<9 ; i++) {
        for (int j=0 ; j<9 ; j++) {
            if (arr[j] == i)
                count++;
            printf("%d", count);
        }
    }
}