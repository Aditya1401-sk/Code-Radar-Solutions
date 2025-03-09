// #include<stdio.h>
// void main()
// {
//     int i,j,n;
//     scanf("%d",&n);
//     for(i=n;i>=1;i--){
//         for(j=1;j<=i;i++){
//             printf("*");
            
//             if(j<i){
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

void main() {
    int i, j, n;

    // Get the number of rows for the triangle
    // printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop to control the number of rows
    for(i = n; i >= 1; i--) {  // Start from n and decrease
        for(j = 1; j <= i; j++) {  // Inner loop to print stars for each row
            printf("*");  // Print the star

            // Print space between stars, but not after the last star in a row
            if(j < i) {
                printf(" ");
            }
        }
        printf("\n");  // Move to the next line after each row of stars
    }
}
