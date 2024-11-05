/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:09:52 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/04 17:45:45 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t src_len = ft_strlen(src);

	if (dstsize == 0)
		return (src_len);
	size_t	i;
	i = 0;
	while (src[i] && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0'; 
	return (src_len);
}
// #include <stdio.h>
// int main()
// {
// 	char src[50] = "hello";
// 	char dst[50] = "world";

// 	ft_strlcpy(dst, src, 2);
// 	printf("%s", dst);
// }