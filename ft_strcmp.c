#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] == s1[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	
}

int	main()
{
	char a[24] = "029234956789";
	char b[24] = "019234956789";
	
	// if (c == NULL)
	// 	printf("символ не найден\n");
	// else
	// // 	printf("символ на позиции %ld\n", c - a + 1 );
		printf("result %d\n",ft_strncmp(a, b, 5));
	return 0;
}