#include <stdio.h>
#include <string.h>
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return(i);
}

int	main()
{
	char *a = "1247824774";
	ft_strlen(a);
	printf("%d\n",ft_strlen(a));
	return 0;
}