/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:57:19 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 19:31:10 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	unsigned char	*s;
	
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	
	if (!d && !s)
		return (0);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);	
}
// int main()
// {
// 	char d[10] = {0};
// 	char s[] = "hello";
// 	printf("%s", ft_memcpy(d,s,2));
// 	// printf("%s", memcpy(d,s,1));
// }