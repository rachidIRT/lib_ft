/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:47:01 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/04 22:20:22 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len = ft_strlen(dst);
	size_t	src_len	= ft_strlen(src);
	size_t i;
	
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	
	i = 0;
	while (src[i] && dst_len + i < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
// int main() {
//  	char destin[20] = "Hello";
// 	char source[20] = ", world!";
// 	unsigned int result = ft_strlcat(destin, source, 5);
// 	printf("Result: %s\n", destin);
// 	printf("Length: %d\n", result);
// 	return (0);
// }