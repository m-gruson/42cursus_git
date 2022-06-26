#include "ft_printf.h"

int	ft_hexlen(unsigned long long int n)
{
	unsigned long long int	len;

	len = 0;

	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

// int main()
// {
// 	unsigned long long int n;

// 	n = LONG_MIN;
// 	printf("%d", ft_hexlen(n));
// }