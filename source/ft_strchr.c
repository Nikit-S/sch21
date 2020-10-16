char *ft_strchr(const char *s, int c)
{
    int i;
    char *pt;

    pt = (char *)s;
    i = 0;
    
    while (pt[i])
    {
        if (pt[i] == c)
            return (&pt[i]);
        i++;
    }
    if (pt[i] == c)
            return (&pt[i]);
    return (0);
}