#include "libft.h"
#include <stdio.h>

// int	ft_strlen(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != 0)
// 	{
// 		i++;
// 	}
// 	return(i);
// }
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;

	
	
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		if (!(substr = malloc(sizeof(char) * 1)))
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (!(substr = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}						

int main()
{
	char a[20] = "adfdsdffdsf";
	printf("%s\n",ft_substr(a, 2, 5));
	return 0;
}