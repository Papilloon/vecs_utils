/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_cross.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:36:36 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 16:44:50 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_quat4	quat4_cross(t_quat4 a, t_quat4 b)
{
	t_quat4	new;

	new.a = a.a * b.a - a.b * b.b - a.c * b.c - a.d * b.d;
	new.b = a.a * b.b + a.b * b.a + a.c * b.d - a.d * b.c;
	new.c = a.a * b.c - a.b * b.d + a.c * b.a + a.d * b.b;
	new.d = a.a * b.d + a.b * b.c - a.c * b.b + a.d * b.a;
	return (new);
}
