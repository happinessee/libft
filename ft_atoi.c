/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojeong <hyojeong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:45:15 by hyojeong          #+#    #+#             */
/*   Updated: 2022/03/10 11:58:04 by hyojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

int	is_space(int c)
{
	if (c >= 9 && c <= 13 || c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int		idx;
	int		sign;
	int		result;

	result = 0;
	idx = 0;
	sign = 1;
	while (str[idx])
	{
		if (is_space(str[idx]))
			idx++;
	}
	if (str[idx] == '+' || str[idx] == '-')
	{
		if (str[idx] == '-')
			sign *= -1;
		idx++;
	}
	while (str[idx] && ft_isdigit(str[idx]))
	{
		result = result * 10 + str[idx] - 48;
		idx++;
	}
	return (result * sign);
}
