//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char*)str)[i] = 0;
		i++;
	}
}

// int main()
// {
// 	char a[15] = "1234567890";
// 	int dl = 5;

// 	printf("%s\n",ft_bzero(a, dl));

// 	return 0;
// }