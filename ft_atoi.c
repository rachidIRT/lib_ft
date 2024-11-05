/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:43:22 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 19:29:49 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int m;
    unsigned long ret;

    i = 0;
    sign = 1;
    m = 0;
    ret = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        ret *= 10;
        ret += str[i] - 48;
        i++;
    }
    return (ret * sign);
}
// int main()
// {
//     char src[] = "4654646";
    
//     printf("%d\n", ft_atoi(src));
//     printf("%d\n", atoi(src));
// }
