/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:11:23 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/24 12:00:49 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	*str1 = "hello world!";
	char	*str2 = "l";
	printf("ft_strstr: %s\n", ft_strnstr(str1, str2, 3));
	printf("ft_strstr: %s\n", ft_strnstr(str1, str2, 10));
} */