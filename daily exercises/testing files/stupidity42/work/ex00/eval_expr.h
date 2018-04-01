/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 12:31:13 by shuang            #+#    #+#             */
/*   Updated: 2018/03/31 13:41:40 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int	eval_expr(char *expr);
int	do_sum(char **expr);
int	do_factor(char **expr);
int	get_number(char **expr);

#endif
