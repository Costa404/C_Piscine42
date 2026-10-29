int occ_z(char *str)
{
    int count = 0;
    while(*str)
    {
        if(*str == 'Z')
            count++;
        str++;
    }
    
    return count;
}