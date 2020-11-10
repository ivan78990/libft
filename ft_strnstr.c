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

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < n && s1[i] != '\0')
	{
		j = 0;
		while (i + j < n && s1[i + j] == s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return(NULL);
}

int	main()
{
	char a[24] = "019234956789";
	char b[3] = "789";
	char *c;

	c = ft_strnstr(a, b, 15);
	if (c == NULL)
		printf("символ не найден\n");
	else
	// 	printf("символ на позиции %ld\n", c - a + 1 );
		printf("символ на позиции %ld\n",c - a + 1 );
	return 0;
}