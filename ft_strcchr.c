#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(char *str, int ch)
{
	int i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)ch)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return(NULL);
}

int	main()
{
	char a[24] = "019234956789";
	int b = '9';
	char *c;

	c = ft_strrchr(a,b);
	// if (c == NULL)
	// 	printf("символ не найден\n");
	// else
	// 	printf("символ на позиции %ld\n", c - a + 1 );
	printf("символ на позиции %ld\n", c - a + 1 );
	return 0;
}