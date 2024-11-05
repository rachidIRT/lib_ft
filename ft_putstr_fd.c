/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:12:46 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/04 23:23:41 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
void	ft_putstr_fd(char *s, int fd)
{
    size_t i;
    if(!s)
        return;

    i = 0;
    while (i < ft_strlen(s))
    {
         write(fd, s, 1);
         i++;
    }
}
int main(void)
{
	char	*s = NULL;

	ft_putstr_fd(s, 1);
	return (0);
}