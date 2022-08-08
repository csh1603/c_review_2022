#include <stdio.h>

int main(void) {
    int arr[9], max=0, m;

    for (int i=0 ; i<9 ; i++) {
       scanf("%d", &arr[i]); 
       if(arr[i]>max)  {
        max = arr[i];
        m = i+1;
       }
    }
    printf("%d\n%d", max, m);
}