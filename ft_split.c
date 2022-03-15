/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:07:51 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/15 14:43:25 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	count_words(char *str, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i + 1] == c && str[i] != c)
			words++;
		i++;
	}
	return (words);
}

static void	copy_words(char	*dst, char *src, char c)
{
	size_t	i;

	i = 0;
	while (src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
}

static void	excute(char **arr, char *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	wrd;

	i = 0;
	wrd = 0;
	while (str[i])
	{
		if (c == str[i])
			i++;
		else
		{
			j = 0;
			while (str[i + j] != c)
				j++;
			arr[wrd] = (char *)malloc(sizeof(char) * (j + 1));
			copy_words(arr[wrd], str + i, c);
			i += j;
			wrd++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	cnt;

	cnt = count_words((char *)s, c);
	res = (char **)malloc(sizeof(char *) * (cnt + 1));
	excute(res, (char *)s, c);
	res[cnt] = 0;
	return (res);
}
