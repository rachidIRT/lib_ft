/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:55:50 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 19:31:05 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;

	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
// int main() {
// 	const char *s1 = "Hello, World!";
// 	const char *s2 = "Hello, World!";
// 	const char *s3 = "Hello, WorlD!";

// 	int result1 = ft_memcmp(s1, s2, 13);
// 		printf("نتيجة المقارنة بين s1 و s2: %d\n", result1);

// 	int result2 = ft_memcmp(s1, s3, 13);
// 		printf("نتيجة المقارنة بين s1 و s3: %d\n", result2);
// 	return 0;
// }