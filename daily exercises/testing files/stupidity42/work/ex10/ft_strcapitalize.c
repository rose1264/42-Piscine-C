/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 00:31:33 by shuang            #+#    #+#             */
/*   Updated: 2018/03/20 10:13:55 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha_or_num(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

int		is_uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		is_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_word;

	i = 0;
	is_word = 0;
	while (str[i])
	{
		if (is_lowercase(str[i]) && is_word == 0)
			str[i] -= 32;
		else if (is_uppercase(str[i]) && is_word == 1)
			str[i] += 32;
		if (is_alpha_or_num(str[i]))
			is_word = 1;
		else
			is_word = 0;
		i++;
	}
	return (str);
}
