//*****************************************************************//
// Program     : ALU
// Description : ALU to perform different integer arith operations
// Developer   : Mitu Raj
// Date        : 28-07-2024
//*****************************************************************//
// Libraries
#include <stdio.h>

//** Main **//
int main()
{
    // Local variables
    int a, b, op, c ;
    
    // Accept inputs    
    printf("ALU MENU\n");
    printf("--------\n");
    printf("1. Add\n");
    printf("2. Substract\n");
    printf("3. Multiply\n");
    printf("4. Division\n");
    printf("Enter operation required = ");
    scanf("%d", &op);
    if (op != 1 && op != 2 && op != 3 && op != 4) {
        printf("\nInvalid operation!!\n");
        return 1 ;  // Exit with error
    }
    printf("\nEnter A = ");
    scanf("%d", &a);
    printf("\nEnter B = ");
    scanf("%d", &b);    
    
    // ALU operation decoder
    switch (op) {
        case 1:
            c = a + b ;
            printf("\nSum = A + B  = %0d\n", c);            
            break ;
        case 2:
            c = a - b ;
            printf("\nDifference = A - B  = %0d\n", c);            
            break ;
        case 3:
            c = a * b ;
            printf("\nProduct = A * B  = %0d\n", c);            
            break ;
        case 4:
            c = a / b ;
            printf("\nQuotient = A / B  = %0d\n", c);            
            break ;
        default:
            printf("\nInvalid operation!!\n");
            break ;
    }   

    return 0 ;
}