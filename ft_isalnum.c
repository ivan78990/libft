
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}


int	main()
{
	char a = '_';
	// char b[24] = "019234956789";
	
	// if (c == NULL)
	// 	printf("символ не найден\n");
	// else
	// // 	printf("символ на позиции %ld\n", c - a + 1 );
		printf("result_my %d\n",ft_isalnum(a));
		printf("result_real %d\n",isalnum(a));
	return 0;
}