#include <stdio.h>
int main() {
    int n, i, j;
    int a = 0, b = 1, nextFib;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int num = 1; 
    for(i = 1; i <= n; i++) {
        if(i == 1)
            nextFib = 1;
        else if(i == 2)
            nextFib = 1;
        else
            nextFib = a + b;
        a = b;
        b = nextFib;
        for(j = 1; j <= nextFib; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n"); 
    }
    return 0;
}
