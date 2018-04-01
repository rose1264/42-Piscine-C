/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 10:53:25 by shuang            #+#    #+#             */
/*   Updated: 2018/03/20 11:00:50 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int size_of_dest;

	i = 0;
	size_of_dest = 0;
	while (dest[size_of_dest])
		size_of_dest++;
	while (src[i])
	{
		dest[size_of_dest] = src[i];
		size_of_dest++;
		i++;
	}
	dest[size_of_dest] = '\0';
	return (dest);
}
