#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *arr, int c, size_t n)
{
	size_t i;
	unsigned char p;

	i = 0;
	p = (char)c;
	while (i < n)
	{
		if (((unsigned char*)arr)[i] == p)
			return((unsigned char*)arr + i);
		i++;
	}
	return (NULL);
}

int main (void)
{
	unsigned char src[15] = "1234567890";
	char *sym;
	printf ("src old: %s\n", src);

	sym = ft_memchr (src, '9', 10);

	if (sym != NULL)
		sym[0] = '!';
	printf ("src new: %s\n", src );
	return 0;
}