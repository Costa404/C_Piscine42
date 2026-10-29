int ft_strlen(char *str)
{
    char *ptr = str;
    while(*str)
        str++;
    
    return str - ptr;
}