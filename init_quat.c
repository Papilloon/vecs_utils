/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_quat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:11:46 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 16:13:19 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_quat4	new_quat4(t_vec value)
{
	t_quat4	new;

	new.a = value;
	new.b = value;
	new.c = value;
	new.d = value;
	return (new);
}

t_quat4	quat4(t_vec a, t_vec b, t_vec c, t_vec d)
{
	t_quat4	new;

	new.a = a;
	new.b = b;
	new.c = c;
	new.d = d;
	return (new);
}
