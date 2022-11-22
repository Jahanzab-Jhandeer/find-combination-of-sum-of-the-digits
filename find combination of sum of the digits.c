#include<stdio.h>

int main () {
    int i,j,k,l,n, count;
    printf("Enter the number : ");
    scanf("%d" , &n);

    if(n >= 1 && n <= 39) {
        printf("a + b + c + d = n");
    }
    for(i=0;i<=9; i++) {
        for(j=0;j<=9; j++) {
            for(k=0; k<=9; k++) {
                for(l=0; l<=9; l++) {
                    if( i + j + k + l == n) {
                        printf("\n%d, %d, %d, %d," , i, j, k, l);
                        count++;
                    }
                }
            }
        }
    }
    printf("\ntotal number of combination : ");
    printf("%d\n" , count);
}