#include <stdio.h>
#include <string.h>
void ft_memcpy(void *dest, void *src, size_t len)
{
	int i;

	i = 0;
	while(i < len)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		i++;
		// printf("%s\n", dest);	
	}		
	// printf("my func: 	%s\n", dest );
	// printf("real: 		%s\n", memcpy(dest, src, 5));
}

// int main()
// {
// 	char a[15] = "1234567890";
// 	char b[15] = "";
// 	int dl = 10;

// 	ft_memcpy(b, a, dl);

// 	return 0;
// }