
// function to calculate sum of two roman numbers

void total_sum(char * str1, char * str2)
{
    int total = 0;
    total = num_val(str1) + num_val(str2);
    printf("\n%s\n", roman(total));

}


// function to subtract two numbers

void difference(char * str1, char * str2)
{
    int diff = 0,num1=0,num2=0;
    num1= num_val(str1);
    num2=num_val(str2);
    if(num1>num2)
     {
	diff=num1-num2;
     }
    else
     {
	diff=num2-num1;
     }
    printf("\n%s\n", roman(diff));

}
//function to sum to decimal numbers

int num_val(char * str)
{
    int sum = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if ((num(str[i])) >= (num(str[i + 1])))
        {
            sum = sum + num(str[i]);
        }
        else
        {
            sum = sum + (num(str[i + 1]) - num(str[i]));
            i++;
        }
        i++;
    }
    return sum;
}

// to determine each roman character value
int num(char c)
{
    int i = 0, val = 0;
    switch (c)
    {
    case 'I': val = 1;
        break;
    case 'V': val = 5;
        break;
    case 'X':val = 10;
        break;
    case 'L':val = 50;
        break;
    case 'C':val = 100;
        break;
    case 'D':val = 500;
        break;
    case 'M': val = 1000;
        break;
    default: val = 0;
        break;
    }

    return val;
}

// to convert back to Roman numbers- includes all test cases
char* roman(int val)
{
    static char str[5];
    int one_count = 0, ten_count = 0, hundred_count = 0,five_count=0, fifty_count=0, fiveHundred_count=0;
    static int i = 0;
    if (val > 2000)
    {
        printf("\n The value cannot be represented in Roman Numerals");

        return 0;
    }
    while (val > 0)
    {
        if ((val >= 1) && (val<4) && (one_count<4))
        {
            str_append(str, 'I');
            val = val - 1;
            one_count++;
        }
        else if (val == 4)
        {
            str_append(str, 'I');
            str_append(str, 'V');
            val = val - 4;
        }
        else if (val == 9)
        {
            str_append(str, 'I');
            str_append(str, 'X');
            val = val - 9;
        }
        else if ((val >= 5) && (val < 10) && (five_count<1))
        {
           
            str_append(str, 'V');
            val = val - 5;
            five_count++;
        }
        else if ((val >= 10) && (val < 40) && (ten_count<4))
        {
            str_append(str, 'X');
            val = val - 10;
            ten_count++;
        }
        else if ((val >= 40) && (val < 50))
        {
            str_append(str, 'X');
            str_append(str, 'L');
            val = val - 40;
        }
        else if ((val >= 50) && (val < 90)&& (fifty_count<1))
        {
            str_append(str, 'L');
            val = val - 50;
            fifty_count++;
        }
        else if ((val >= 90) && (val < 100))
        {
            str_append(str, 'X');
            str_append(str, 'C');
            val = val - 90;
        }
        else if ((val >= 100) && (val < 400) && (hundred_count<4))
        {
            str_append(str, 'C');
            val = val - 100;
            hundred_count++;
        }
        else if ((val >= 400) && (val < 500))
        {
            str_append(str, 'C');
            str_append(str, 'D');
            val = val - 400;
        }
        else if ((val >= 500) && (val < 900) && (fiveHundred_count<1))
        {
            str_append(str, 'D');
            val = val - 500;
            fiveHundred_count++;
        }
   
        else if ((val >= 900) && (val < 1000))
        {
            str_append(str, 'C');
            str_append(str, 'M');
            val = val - 900;
        }
        else if ((val >= 1000) && (val < 2000))
        {
            str_append(str, 'M');
   
            val = val - 1000;
        }
    }
    return str;
   
}

// to append to the string

void str_append(char * str1, char str2)
{
    static int i = 0;
    str1[i++] = str2;
}



