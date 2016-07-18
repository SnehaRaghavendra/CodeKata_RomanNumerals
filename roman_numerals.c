#include "roman_header.h" // include the header file that was created
#include "roman_1.c"    // to include the function definition file

int main()
{

// initialize the characters with the test cases required
    char str1[] ="LXII";
    char str2[]= "C";
   int m = 0;
// enter the mode of operation required
    printf("Enter the mode 0-add, 1-sub: ");
    scanf("%d",&m);
 switch (m)
    {
    case 0: printf("\nThe Sum of two Roman Numerals are: ");
            total_sum(str1, str2);
            break;
    case 1:
            printf("\nThe difference of two Roman Numerals are: ");
            difference(str1, str2);
            break;
    default:
            printf("\nNone selected");
            break;
    }

 return 0;
}


