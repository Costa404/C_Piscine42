int count_alen(char *str)
{
    int count = 0;
    while(*str)
    {
        if(*str == 'a')
            return count;
        count++;
        str++;
    }
    
    return count;
}