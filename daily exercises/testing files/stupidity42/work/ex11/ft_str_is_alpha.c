/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 10:00:47 by shuang            #+#    #+#             */
/*   Updated: 2018/03/20 10:10:34 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha_character(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(is_alpha_character(str[i])))
			return (0);
		i++;
	}
	return (1);
}
