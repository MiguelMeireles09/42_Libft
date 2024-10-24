/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:34:30 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/24 11:58:50 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*d;

	s = (const char *) src;
	d = (char *) dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/* int	main(void)
{
	char	src[10] = "oladfa";
	char	dest[10] = "";
	printf("Before memcpy => %s\n", dest);
	ft_memcpy(dest, src, 3);
	printf("%zu\n", ft_strlen(dest));
	printf("After memcpy => %s\n", dest);
} */
// if (!dest || !src)
	// 	return (NULL);