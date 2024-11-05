/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:12:34 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 19:36:32 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


void	*ft_calloc(size_t count, size_t size)
{
	size_t i;
	unsigned char *tmp;
	
	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
			return (NULL);
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
		return (tmp);
}
int main()
{
	if (ft_calloc(5,5) != NULL)
		printf("khdam : \n");
	else
		printf("makhdamch : ");
}