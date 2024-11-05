/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:37:14 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 19:31:42 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}

// int main()
// {
// 	const char *str = "hello, world";
// 	char *res = ft_strchr(str, 'w');

// 	if (res)
// 	{
// 		printf(" makan lharf : %s\n", res);
// 	}
// 	return (0);
// }