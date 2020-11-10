#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	// char *arr1;
	// char *arr2;
	size_t i;

	i = 0;
	// arr1 = (unsigned char *)a1;
	// arr2 = (unsigned char *)a2;
	while (i < n)
	{
		if (((unsigned char *)arr1)[i] != ((unsigned char *)arr2)[i])
		{
			return (((unsigned char*)arr1)[i] - ((unsigned char*)arr2)[i]);
		}
		i++;
	}
	return (0);
}

int main (void)
{
	unsigned char src[15] = "1274567890";
	unsigned char dst[15] = "1234567890";
	printf ("result my: %d\n", ft_memcmp (src, dst, 10));
	printf ("result real: %d\n", memcmp (src, dst, 10));

	

	// printf ("src new: %s\n", src );
	return 0;
}