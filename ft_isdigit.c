
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}


int	main()
{
	char a = '+';
	// char b[24] = "019234956789";
	
	// if (c == NULL)
	// 	printf("символ не найден\n");
	// else
	// // 	printf("символ на позиции %ld\n", c - a + 1 );
		printf("result_my %d\n",ft_isdigit(a));
		printf("result_real %d\n",isdigit(a));
	return 0;
}