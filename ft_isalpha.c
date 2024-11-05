/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:26:42 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 20:34:57 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*int main()
{
	printf("%d\n",ft_isalpha('7'));
	printf("%d\n",ft_isalpha('A'));
	printf("%d\n",ft_isalpha('g'));
	printf("%d\n",ft_isalpha(91));
}*/
