#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int			ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}