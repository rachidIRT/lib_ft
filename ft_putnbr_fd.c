/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:37:02 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/17 15:26:49 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	ch;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	else if (n <= 9)
	{
		ch = n + '0';
		ft_putchar_fd(ch, fd);
	}
	else
	{
		ch = n % 10 + '0';
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(ch, fd);
	}
}
