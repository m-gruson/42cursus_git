#include "libft.h"

static int    num_len(int nbr)
{
    int    len;

    len = 1;
    if (nbr < 0)
    {
        nbr *= -1;
        len++;
    }
    while (nbr > 9)
    {
        nbr = nbr / 10;
        len++;
    }
    return (len);
}

static char    *wrte_neg(char *str, int n, int len)
{
    while (len > 0)
    {
        str[len] = n % 10 + '0';
        n = n / 10;
        len--;
    }
    return (str);
}

static char    *wrte_pos(char *str, int n, int len)
{
    while (len >= 0)
    {
        str[len] = n % 10 + '0';
        n = n / 10;
        len--;
    }
    return (str);
}

char *ft_itoa(int n)
{
    char *str;
    long int    len;

    len = num_len(n);
	printf("len %ld\n", len);
    str = (char *)malloc(len * sizeof(char) + 1);
    str[len] = '\0';
	if (n == -2147483648)
    {
        str = "-2147483648";
    }
    if (n < 0)
    {
        n *= -1;
        str[0] = '-';
    }
    len--;
    if (str[0] == '-')
    {
        return (wrte_neg(str, n, len));
    }
    else 
    {
        return (wrte_pos(str, n, len));
    }
}

int    main(void)
{
    printf("%s \n", ft_itoa(0));
    printf("%s \n", ft_itoa(-12597));
    printf("%s \n", ft_itoa(4));
    printf("%s \n", ft_itoa(-1));
    printf("%s \n", ft_itoa(INT_MIN));
    printf("%s \n", ft_itoa(INT_MAX));
    printf("%s \n", ft_itoa(12597));
}
   