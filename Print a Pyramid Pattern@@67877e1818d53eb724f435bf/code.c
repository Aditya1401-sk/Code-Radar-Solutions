// #include<stdio.h>
// void main()
// {
//     int i,j,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j=n-1;j++){
//             printf(" ");
//         }
//         for(j=1;j<=(2*i-1);j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

void main() {
    int i, j, n;

    // Get the number of rows for the pyramid
    scanf("%d", &n);

    // Outer loop for the rows
    for(i = 1; i <= n; i++) {  
        // Print spaces before the stars
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars in each row
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }
}
