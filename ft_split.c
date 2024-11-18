/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roubelka <roubelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:12:44 by roubelka          #+#    #+#             */
/*   Updated: 2024/11/18 01:27:46 by roubelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	subpartscount(char const *str, char sep)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		if (*str == sep)
			str++;
		else
		{
			count++;
			while (*str && *str != sep)
				str++;
		}
	}
	return (count);
}

static size_t	next_len(char const *str, char sep)
{
	size_t	bytes;

	bytes = 0;
	while (*str && *str != sep)
	{
		str++;
		bytes++;
	}
	return (bytes);
}

static char	**free_array(char **arr, size_t currentindex)
{
	size_t	i;

	i = 0;
	while (i < currentindex)
	{
		free (arr[i]);
		i++;
	}
	free (arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		arr_index;
	size_t	partlen;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (subpartscount(s, c) + 1));
	if (!arr)
		return (NULL);
	arr_index = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			partlen = next_len(s, c);
			arr[arr_index] = ft_substr(s, 0, partlen);
			if (!arr[arr_index++])
				return (free_array(arr, arr_index));
			s += partlen;
		}
	}
	arr[arr_index] = NULL;
	return (arr);
}
