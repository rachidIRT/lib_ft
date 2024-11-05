/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:12:23 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 19:30:46 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}	
/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_isprint('~'));
	printf("%d\n", ft_isprint(50));
	printf("%d\n", ft_isprint('f'));
}*/