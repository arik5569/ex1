/******************
Name: Ariel Fradin
ID: 324226281
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main() {

    // Ascii
    char ch;
    printf("Ascii:\n");
    printf("Please enter a character \n");
    scanf("%c",&ch);
    printf("Ita numerical value is: %d\n",ch);
    printf("0 for even, 1 for odd: %d\n",ch&1);




    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    printf("please enter a negative integer\n");
    int number;
    scanf("%d",&number);
    printf("1's complement: %d\n", ~(~number-1));
    printf("unigned: %u\n",number);




    // Shifting right and left
    printf("\nShifting right and left:\n");
    printf("Please enter 3 integers\n");
    int value,shiftLeft,shiftRight;
    scanf("%d %d %d", &value, &shiftRight, &shiftLeft);
    printf("After shifting right and left: %d\n", (value >> shiftRight) << shiftLeft);




    //Even - Odd
    printf("\nEven - Odd:\n");
    int num1, num2, num3;
    printf("please enter 3 integers\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", ((num1 & 1)&(num2 & 1))|((num1 & 1)&(num3 & 1))|((num2 & 1)&(num3 & 1)));



    // Different Bases
    printf("\nDifferent Bases:\n");
    int oct,hex;
    printf("Please enter two numbers in octal and hexadecimal bases\n");
    scanf("%o %x", &oct, &hex);
    printf("LSBs: %d %d\n",oct&1,hex&1);
    printf("MSBs: %d %d\n",oct>>31,hex>>31);


    printf("Bye!\n");

    return 0;
}
