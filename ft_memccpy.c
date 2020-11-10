#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{

	size_t i;
	char *dst2;
	char *src2;

	i = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		if ((unsigned char)src2[i] == (unsigned char)c)
			return ((char *)dst + i +1);
		i++;
	}
	return (NULL);
}

int main (void)
{
   unsigned char src[15]="1234567890";
   unsigned char dst[15]= "";
   
   //memccpy(dst, src,'5', 10);
   //printf ("my: %s\n", dst);
   ft_memccpy(dst, src,'5', 10);
   printf ("real: %s\n", dst);

   return 0;
}