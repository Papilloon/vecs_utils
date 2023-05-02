/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_clamp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:57:45 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 12:05:03 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

static float	clamp_value(float x, float min, float max)
{
	if (min <= max)
	{
		if (x < min)
			return (min);
		if (x > max)
			return (max);
	}
	else
	{
		if (x > min)
			return (min);
		if (x < max)
			return (max);
	}
	return (x);
}

t_vec3	vec3_clamp(t_vec3 src, t_vec3 min, t_vec3 max)
{
	src.x = clamp_value(src.x, min.x, max.x);
	src.y = clamp_value(src.y, min.y, max.y);
	src.z = clamp_value(src.z, min.z, max.z);
	return (src);
}

t_vec4	vec4_clamp(t_vec4 src, t_vec4 min, t_vec4 max)
{
	src.x = clamp_value(src.x, min.x, max.x);
	src.y = clamp_value(src.y, min.y, max.y);
	src.z = clamp_value(src.z, min.z, max.z);
	src.a = clamp_value(src.a, min.a, max.a);
	return (src);
}
