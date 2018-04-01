/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 11:03:09 by shuang            #+#    #+#             */
/*   Updated: 2018/03/20 11:11:52 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int size_of_dest;

	i = 0;
	size_of_dest = 0;
	while (dest[size_of_dest])
		size_of_dest++;
	while (src[i] && (i < nb))
	{
		dest[size_of_dest] = src[i];
		size_of_dest++;
		i++;
	}
	dest[size_of_dest] = '\0';
	return (dest);
}
