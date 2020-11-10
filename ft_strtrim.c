#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && j > i)
	{
		j--;
	}
	return (ft_strsub(s, i, (j - i + 1)));
}