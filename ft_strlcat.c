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

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (dst[j] && j < size)
		j++;
	while ((src[k]) && ((j + k + 1) < size))
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != size)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
}

int main()
{
	char a[20] = "bonjour";
	char b[100] = "saluta";

	// strlcat(a, b, 20);
	printf("%zu\n",strlcat(a, b, 20));
	printf("%zu\n",ft_strlcat(a, b, 20));
	return 0;
}
