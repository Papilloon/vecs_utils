/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:55:21 by parallels         #+#    #+#             */
/*   Updated: 2023/04/03 12:16:55 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_vec2	vec2(t_vec x, t_vec y)
{
	t_vec2	vec;

	vec.x = x;
	vec.y = y;
	return (vec);
}

t_vec3	vec3(t_vec x, t_vec y, t_vec z)
{
	t_vec3	vec;

	vec.x = x;
	vec.y = y;
	vec.z = z;
	return (vec);
}

t_vec4	vec4(t_vec x, t_vec y, t_vec z, t_vec a)
{
	t_vec4	vec;

	vec.x = x;
	vec.y = y;
	vec.z = z;
	vec.a = a;
	return (vec);
}

t_vec_pos	vec_pos(t_vec3 a, t_vec3 b)
{
	t_vec_pos	v;

	v.a = a;
	v.b = b;
	return (v);
}
