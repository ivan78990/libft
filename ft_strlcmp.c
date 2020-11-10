#include <stdio.h>

char	*ft_strlcpy(char *str1, const char *str2, size_t size)
{
	size_t i;

	i = 0;
	// str1 != 0 && str2 != 0 && 
	while (i < size)
	{
		str1[i] = str2[i];
		i++;
	}
	 str1[i] = '\0';
	return (str1);
}

int main()
{
	char a[10] = {0};
	char *b = "12364";
	printf("%s\n",a);
	printf("%s\n",ft_strlcpy(a, b, 6));
	return 0;
}
