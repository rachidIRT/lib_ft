/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:46:26 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 21:56:48 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *b;

	i = 0;
	b = (unsigned char*) s;
	
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
			return (b + i);
			i++;
	}
	return (NULL);
}
// int	main()
// {
// 	char	*s = "moad boujamaa";
// 	char *result = ft_memchr(s, 'j', ft_strlen(s));

//     printf("3adad : %s\n", result);
// }
