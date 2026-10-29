


int ft_atoi(char *str)
{
    int num = 0;
    int sign = 1;
    while((*str >= 9 && *str <= 13) || *str == 32)
        str++;
    if(*str == '+' || *str == '-')
    {
        if(*str == '-')   
            sign = -sign;   
        str++;
    }

    while(*str >= '0' && *str <= '9')       
    {
        num = (num * 10)  + (*str - '0');            
        str++;
    }

    return (num * sign);
    


    
}
