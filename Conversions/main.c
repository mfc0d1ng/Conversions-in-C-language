#include <stdio.h>
#include <stdlib.h>
#include "include/conversions.h"

int main(void)
{
    size_t decimal_equivalent = 0, decimal = 0;
    char input_value[100] = {0};
    char *equivalent = NULL;
    int choice = 0;
    printf("%s\n", "Welcome to my Calculator!");
    while (1)
    {
        printf("%s\n", "Please Choose one of the following: ");
        printf("%s\n", "0.  Convert binary to octal.\n"
                       "1.  Convert binary to decimal.\n"
                       "2.  Convert binary to hexadecimal.\n"
                       "3.  Convert octal to binary.\n"
                       "4.  Convert octal to decimal.\n"
                       "5.  Convert octal to hexadecimal.\n"
                       "6.  Convert decimal to binary.\n"
                       "7.  Convert decimal to decimal.\n"
                       "8.  Convert decimal to hexadecimal.\n"
                       "9.  Convert hexadecimal to binary.\n"
                       "10. Convert hexadecimal to octal.\n"
                       "11. Convert hexadecimal to decimal.\n"
                       );
        printf("%s", "Your choice: ");
        scanf("%i", &choice);
        switch (choice)
        {
        case 0:
            printf("%s", "Enter binary value: ");
            scanf("%100s", input_value);
            equivalent = BinToOct(input_value);
            printf("-> %s0o%s\n\n\n", "The octal equivalent is: ", equivalent);
            break;

        case 1:
            printf("%s", "Enter binary value: ");
            scanf("%100s", input_value);
            decimal_equivalent = BinToDec(input_value);
            printf("-> %s%lu\n\n\n", "The decimal equivalent is: ", decimal_equivalent);
            break;

        case 2:
            printf("%s", "Enter binary value: ");
            scanf("%100s", input_value);
            equivalent = BinToHex(input_value);
            printf("-> %s0x%s\n\n\n", "The hexadecimal equivalent is: ", equivalent);
            break;

        case 3:
            printf("%s", "Enter octal value: ");
            scanf("%100s", input_value);
            equivalent = OctToBin(input_value);
            printf("-> %s0b%s\n\n\n", "The binary equivalent is: ", equivalent);
            break;

        case 4:
            printf("%s", "Enter octal value: ");
            scanf("%100s", input_value);
            decimal_equivalent = OctToDec(input_value);
            printf("-> %s%lu\n\n\n", "The decimal equivalent is: ", decimal_equivalent);
            break;

        case 5:
            printf("%s", "Enter octal value: ");
            scanf("%100s", input_value);
            equivalent = OctToHex(input_value);
            printf("-> %s0x%s\n\n\n", "The hexadecimal equivalent is: ", equivalent);
            break;

        case 6:
            printf("%s", "Enter decimal value: ");
            scanf("%lu", &decimal);
            equivalent = DecToBin(decimal);
            printf("-> %s0b%s\n\n\n", "The binary equivalent is: ", equivalent);
            break;

        case 7:
            printf("%s", "Enter decimal value: ");
            scanf("%lu", &decimal);
            equivalent = DecToOct(decimal);
            printf("-> %s0o%s\n\n\n", "The octal equivalent is: ", equivalent);
            break;

        case 8:
            printf("%s", "Enter decimal value: ");
            scanf("%lu", &decimal);
            equivalent = DecToHex(decimal);
            printf("-> %s0x%s\n\n\n", "The hexadecimal equivalent is: ", equivalent);
            break;

        case 9:
            printf("%s", "Enter hexadecimal value: ");
            scanf("%100s", input_value);
            equivalent = HexToBin(input_value);
            printf("-> %s0b%s\n\n\n", "The binary equivalent is: ", equivalent);
            break;

        case 10:
            printf("%s", "Enter hexadecimal value: ");
            scanf("%100s", input_value);
            equivalent = HexToOct(input_value);
            printf("-> %s0o%s\n\n\n", "The binary equivalent is: ", equivalent);
            break;

        case 11:
            printf("%s", "Enter hexadecimal value: ");
            scanf("%100s", input_value);
            decimal_equivalent = HexToDec(input_value);
            printf("-> %s%lu\n\n\n", "The decimal equivalent is: ", decimal_equivalent);
            break;

        default:
            printf("-> %s\n\n", "Invalid choice!");
            break;
        }

        if(equivalent)
        {
            free(equivalent);
            equivalent = NULL;
        }
    }

    return EXIT_SUCCESS;
}