/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_normalized.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:44:06 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 11:11:50 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_vec4	vec4_normalized(t_vec4 v)
{
	float	len;

	len = (float)sqrt(v.x * v.x + v.y * v.y + v.z * v.z + v.a * v.a);
	v.x /= len;
	v.y /= len;
	v.z /= len;
	v.a /= len;
	return (v);
}

t_vec3	vec3_normalized(t_vec3 v)
{
	float	len;

	len = (float)sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
	v.x /= len;
	v.y /= len;
	v.z /= len;
	return (v);
}
