#include<stdio.h>
//Find the Combination of the digits
int main () {
    int i,j,k,l,m, n, count;
    printf("Enter the number : ");
    scanf("%d" , &n);

    
        printf("a + b + c + d = n");
    
    for(i=0;i<=9; i++) {
        for(j=0;j<=n; j++) {
            for(k=0; k<=n; k++) {
                for(l=0; l<=n; l++) {
                    for(m=0; m<=n; m++) {
                        if( i + j + k + l + m == n) {
                        printf("\n%d, %d, %d, %d, %d" , i, j, k, l, m);
                        count++;
                    }
                }
            }
        }
    }
    printf("\ntotal number of combination : ");
    printf("%d\n" , count);
}
}
