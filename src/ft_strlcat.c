/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:21:32 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/22 14:05:04 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <bsd/string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstSize;
	size_t	srcSize;
	
	
	if (!dst || !src)
		return (0);
	i = 0;
	dstSize = ft_strlen(dst);
	srcSize = ft_strlen(src);
	if (dstSize >= size)
		return (size + srcSize);
	while (i < (size - dstSize - 1))
	{
		dst[dstSize + i] = src[i];
		i++;
	}	
	dst[dstSize + i] = '\0';
	return (dstSize + srcSize);
}

int	main(void)
{
	char dest[] = "olahello";
	char src[] = "hello";
	printf("Before strlcat => %s\n", dest);
	// printf("%zu\n", strlcat(dest, src, 5));
	printf("%zu\n", ft_strlcat(dest, src, 5));
	printf("After strlcat => %s\n", dest);
}