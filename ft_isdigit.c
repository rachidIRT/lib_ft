/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:51:53 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 19:30:42 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isdigit('4'));
	printf("%d\n", ft_isdigit('d'));
}*/