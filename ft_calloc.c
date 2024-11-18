/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:12:34 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/17 23:02:24 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalsize;
	void	*ptr;

	totalsize = count * size;
	if (count != 0 && totalsize / count != size)
		return (NULL);
	ptr = malloc(totalsize);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, totalsize);
	return (ptr);
}
