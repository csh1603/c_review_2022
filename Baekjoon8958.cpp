//미완성 머리 쓰다가 녹을듯

#include <stdio.h>
#include <string.h>

int main(void) {
    int c;
    char arr[80];

    scanf("%d", &c);

    for(int i=0 ; i<c ; i++) {
        int count = 0;
        scanf("%s", &arr);
        for (int j=0 ; j<strlen(arr) ; j++) {
            if(strcmp(&arr[i], "O")) {
            count++;
            for (int t=j-1 ; t>=0 ; t--) {
                if (strcmp(&arr[t], "X"))
                break;
                else if (strcmp(&arr[t], "O"))
                count++;
            }
            }
        }
        printf("%d\n", count);
    }
}