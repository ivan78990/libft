#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s1;

	if (!(s1 = malloc(size * count)))
		return (NULL);
	ft_memset(s1, 0, count * size);
	return (s1);
}