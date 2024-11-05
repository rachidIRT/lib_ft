/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:49:40 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 19:40:01 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char *dest;
	
	i = 0;
	dest = (char *) malloc(ft_strlen(s1) + 1);
	if (!dest)
	 return (0);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int main()
{
	char src[] = "hello";
	printf("%s\n", ft_strdup(src));
}


