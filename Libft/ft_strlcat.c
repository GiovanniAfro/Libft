/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:58:05 by gcavanna          #+#    #+#             */
/*   Updated: 2022/10/11 14:56:39 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_lenght;
	size_t	src_lenght;

	src_lenght = ft_strlen(src);
	dest_lenght = ft_strlen(dest);
	j = dest_lenght;
	i = 0;
	if (dest_lenght < size - 1 && size > 0)
	{
		while (src[i] && dest_lenght + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = 0;
	}
	if (dest_lenght >= size)
		dest_lenght = size;
	return (dest_lenght + src_lenght);
}
