

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





