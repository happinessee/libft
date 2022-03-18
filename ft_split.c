/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:07:51 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/18 18:00:13 by hyojeong         ###   ########.fr       */
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
	if (i && str[i - 1] != c)
		words++;
	return (words);
}

static void	copy_words(char	*dst, char *src, char c)
{
	size_t	i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
}

static char	**clear(char **str, size_t cnt)
{
	size_t	idx;

	idx = 0;
	while (idx < cnt)
	{
		free(str[idx]);
		idx++;
	}
	free(str);
	return (0);
}

static char	**excute(char **arr, char *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	wrd;

	i = 0;
	wrd = 0;
	while (str[i])
	{
		while (c == str[i])
			i++;
		if (!str[i])
			break ;
		j = 0;
		while (str[i + j] && str[i + j] != c)
			j++;
		arr[wrd] = (char *)malloc(sizeof(char) * (j + 1));
		if (arr[wrd] == 0)
			return (clear(arr, wrd));
		copy_words(arr[wrd], str + i, c);
		i += j;
		wrd++;
	}
	arr[wrd] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	cnt;

	cnt = count_words((char *)s, c);
	res = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (res == 0)
		return (NULL);
	return (excute(res, (char *)s, c));
}
