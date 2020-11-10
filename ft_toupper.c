#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c =  c - 32;
	return (c);
}

int	main()
{
	char a = 'a';

	printf("%c\n",ft_toupper(a));
	return 0;
}