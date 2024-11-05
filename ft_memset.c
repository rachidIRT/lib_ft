/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:32:48 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 19:31:32 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr;
    
    ptr = b;
    while (len)
    {
        *ptr++ = c;
        len --;
    }
    return (b);
}

// int main()
// {
//     int n;
//     memset(&n, 0b00111001, 1);
//     memset((char *)&n + 1, 0b101, 1);
//     printf("%i", n);
// }
//00000000 00000000 00000000 00000000





//     // char str[25] = "hello, woreld rachid";
//     // printf("befor : %s\n", str);
//     // ft_memset(str, '*', 4);
//     // printf("after : %s\n", str);
//     int x = 25433435;
//     x = 42;
//     ft_memset (&x, 0, 4);
//     ft_putchar ('-');
//     ft_memset (&x, 42, 1);
//     printf("%d\n", x);
//     return (0);
    
//  }
