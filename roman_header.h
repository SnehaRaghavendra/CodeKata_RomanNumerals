//HEADER FILE
#include <stdio.h>
#include <string.h>


int num(char str); //to get the decimal value for each roman character
int num_val(char * str); //to get the total decimal value from roman characters
void total_sum(char * str1, char * str2); // to find the sum of roman numbers
void difference(char * str1, char * str2); // to find the difference of roman numbers
char* roman(int val); // to convert the decimal number to roman number
void str_append(char * str1, char str2); // for concatenating characters to a string
