char *ft_strnstr(const char *haystack, const char *needle, int len)
{
    int i;
    int c;
    char *pt;

    pt = (char *)haystack;
    i = 0;
    while(pt[i])
    {
        c = 0;
        while(pt[i] == needle[c])
        {
            if (c == len - 1)
                return (&pt[i - c]);
            c++;
            i++;
        }
        i++;
    }
    return (0);
}