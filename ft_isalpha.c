
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}


int	main()
{
	char a = '0';
	// char b[24] = "019234956789";
	
	// if (c == NULL)
	// 	printf("символ не найден\n");
	// else
	// // 	printf("символ на позиции %ld\n", c - a + 1 );
		printf("result_my %d\n",ft_isalpha(a));
		printf("result_real %d\n",isalpha(a));
	return 0;
}