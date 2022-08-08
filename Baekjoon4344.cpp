#include <stdio.h>

int main(void) {
    int c, n, arr[1000];

    scanf("%d", &c);

    for (int i=0 ; i<c ; i++) {
        scanf("%d", &n);
        int sum = 0, count = 0;
        for (int j=0 ; j<n ; j++) {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        double ave = sum / n;
        for (int j=0 ; j<n ; j++) {
            if (arr[j] > ave)
                count++;
        }
        printf("%.3f%%\n", (float)count/n*100);
    }
}