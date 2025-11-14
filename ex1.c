/******************
Name: Ariel Fradin
ID: 324226281
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main() {
    /*. Ascii

    char ch;
    printf("Ascii:\n");
    printf("Please enter a character \n");
    scanf("%c",&ch);

    printf("Ita numerical value is: %d\n",ch);
    printf("0 for even, 1 for odd: %d\n",ch&1);

        */




    /*.  2's complement and other representations

    printf("\n2's complement to other representations:\n");
    printf("please enter a negative integer\n");
    int number;
    scanf("%d",&number);
    printf("1's complement: %d\n", ~(~number-1));
    printf("unigned: %u",number);

*/






    /*. Shifting right and left

    printf("\nShifting right and left:\n");
    printf("Please enter 3 integers\n");
    int value,shiftLeft,shiftRight;
    scanf("%d %d %d",&value,&shiftLeft,&shiftRight);
    printf("After shifting right and left: %d", (value >> shiftRight) << shiftLeft);
    printf("\n %d %d %d", value, shiftLeft, shiftRight);

 */


    // Even - Odd
    printf("\nEven - Odd:\n");
    int num1, num2, num3;
    printf("please enter 3 integers");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("

    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */

    // Different Bases
    printf("\nDifferent Bases:\n");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */

    printf("Bye!\n");

    return 0;
}
