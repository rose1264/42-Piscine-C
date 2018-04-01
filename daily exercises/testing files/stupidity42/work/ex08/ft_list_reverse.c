/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 23:28:15 by shuang            #+#    #+#             */
/*   Updated: 2018/03/28 23:30:05 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *current;
	t_list *pre;
	t_list *next;

	current = *begin_list;
	pre = 0;
	while (current)
	{
		next = current->next;
		current->next = pre;
		pre = current;
		current = next;
	}
	*begin_list = pre;
}
