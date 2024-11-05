/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:51:20 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 19:32:12 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *tem;
	char	i;
	
	tem = s;
	i = strlen(s);
	s = (s + i);
	while (*s != *tem && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
// int main()
// {
// 	const char *src = "hello, world";
// 	char *res = ft_strrchr(src, 'a');
// 	if (res)
// 		printf("akhir dhor : %s\n", res);
// 	else
// 		printf("makaynchi : %s\n", res);
// 	return 0;
// }