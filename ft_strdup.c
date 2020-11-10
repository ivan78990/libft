#include <stdlib.h>

char 	*ft_strdup(const char *str)
{
	char	*istr;
	size_t	i;

	i = 0;
	istr = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		istr[i] = str[i]
		i++;	
	}
	str[i] = '\0';
	return (str);
}