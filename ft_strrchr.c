/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warchang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:25:46 by warchang          #+#    #+#             */
/*   Updated: 2020/11/11 15:30:05 by warchang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)ch)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (NULL);
}
