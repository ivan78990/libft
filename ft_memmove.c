#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void ft_memcpy(void *dest, void *src, size_t len)
{
	size_t i;

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
 void	*ft_memmove(void *dst,  void *src, size_t n)
 {
 	char	*tmp;

 	tmp = (char *)malloc(sizeof(char) * n);
 	if (tmp == NULL)
 		return (NULL);
 	ft_memcpy(tmp, src, n);
 	ft_memcpy(dst, tmp, n);
 	free(tmp);
 	return (dst);
 }


int main (void)
{
   unsigned char src1[15]= "1234567890";
 
   
   //memccpy(dst, src,'5', 10);
   //printf ("my: %s\n", dst);
   ft_memmove(&src1[4], &src1[3], 3);
   printf ("new: %s\n", src1);
   // memmove(&src[4], &src[9], 1);
   // printf ("new: %s\n", src);

   return 0;
}
