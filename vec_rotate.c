/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:52:15 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 17:04:50 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_vec3	vec3_rotate(t_vec3 v, t_quat4 q)
{
	t_quat4	result;
	t_quat4	vec;
	t_quat4	inverse;
	t_vec3	new;

	vec = quat4(0.0, v.x, v.y, v.z);
	inverse = quat4(q.a, -q.b, -q.c, -q.d);
	result = quat4_cross(q, vec);
	result = quat4_cross(result, inverse);
	new.x = result.b;
	new.y = result.c;
	new.z = result.d;
	return (new);
}
