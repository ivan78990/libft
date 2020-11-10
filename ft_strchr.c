#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int ch)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return ((char *)str + i);
		i++;
	}
	return(NULL);
}

int	main()
{
	char a[11] = "0123456789";
	int b = '9';
	char *c;

	c = ft_strchr(a,b);
	// if (c == NULL)
	// 	printf("символ не найден\n");
	// else
	// 	printf("символ на позиции %ld\n", c - a + 1 );
	printf("символ на позиции %ld\n", c - a + 1 );

	return 0;
}