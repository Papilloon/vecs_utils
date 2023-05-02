/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:37:27 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 17:57:18 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_mat4	mat4(t_vec value)
{
	t_mat4	new;
	int	i;

	new = (t_mat4)malloc(sizeof(t_vec) * 16);
	i = 15;
	while (i >= 0)
	{
		new[i] = value;
		i --;
	}
	return (new);
}
