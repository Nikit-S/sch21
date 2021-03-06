int ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;

    i = 0;
    while(s1[i] && s2[i] && i < (n - 1))
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}