/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:28:35 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 19:32:14 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
/*int main()
{
	printf("%d\n", ft_tolower('a'));
	printf("%d\n", ft_tolower('K'));
	printf("%d\n", ft_tolower('A'));
}*/