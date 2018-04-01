/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 15:27:00 by shuang            #+#    #+#             */
/*   Updated: 2018/03/21 16:27:10 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(int argc, char **argv)
{
	int i;
	int j;
	int total_size;

	i = 1;
	total_size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			total_size++;
			j++;
		}
		i++;
	}
	if (argc > 2)
		total_size += argc - 2;
	return (total_size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		total_size;
	char	*str;

	total_size = ft_size(argc, argv);
	str = (char*)malloc(sizeof(char) * (total_size + 1));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
