/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:08:11 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/03 22:43:46 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if ((unsigned char) s1[i] != (unsigned char) s2[i])
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
                i++;
    }
    return (0);
}
// int main() {
//     const char *str1 = "hello";
//     const char *str2 = "hello";
//     const char *str3 = "hella";

//     // مقارنة بين السلسلتين
//     int result1 = ft_strncmp(str1, str2, 5);
//     int result2 = ft_strncmp(str1, str3, 5);
//     int result3 = ft_strncmp(str1, str3, 4);

//     printf("Comparing '%s' and '%s': %d\n", str1, str2, result1);
//     printf("Comparing '%s' and '%s': %d\n", str1, str3, result2);
//     printf("Comparing '%s' and '%s' (up to 4): %d\n", str1, str3, result3);

//     return 0;
// }