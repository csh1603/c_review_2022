#include <stdio.h>

int main(void) {
    int n, arr[1000], max = 0, add = 0;

    scanf("%d", &n);

    for(int i=0 ; i<n ; i++) {
        scanf("%d", &arr[i]);
        if(max<arr[i])
        max = arr[i];
        add+=arr[i];
    }

    printf("%f", (double)add/(n*max)*100);
}