#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	ft_atoi(const char *str)
{
	size_t i;
	size_t sign;
	size_t result;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == 32 || str[i] == 9)
	{
		i++;
	}
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] != '\0' && str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] < '0' && str[i] > '9')
			return 0;
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int	main()
{
	char a[24] = "     	-78787";
	// char b[24] = "019234956789";
	
	// if (c == NULL)
	// 	printf("символ не найден\n");
	// else
	// // 	printf("символ на позиции %ld\n", c - a + 1 );
		printf("result_my %d\n",ft_atoi(a));
		printf("result_atoi %d\n",atoi(a));
	return 0;
}