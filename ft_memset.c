/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:16:35 by warchang          #+#    #+#             */
/*   Updated: 2020/11/10 18:23:25 by warchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	int i;

	i = 0;
	while(len != 0)
	{
		((unsigned char*)b)[i] = (unsigned char)c;
		i++;
//		printf("%s\n", b );
		len--;
		
	}		
//	printf("my func: 	%s\n", b );
//	printf("real: 		%s\n", memset(b, '0', 10));
	return (b);
}

//	int main()
//	{
//	char a[15] = "1234567890";
//	int h = '0';
//	int dl = 10;
//	ft_memset(a, h, dl);
//
//	return 0;
//}
