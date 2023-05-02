/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_substract_vecs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:45:46 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 17:21:46 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_vec4	vec4_substract_vecs(t_vec4 a, t_vec4 b)
{
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	a.a -= b.a;
	return (a);
}

t_vec3	vec3_substract_vecs(t_vec3 a, t_vec3 b)
{
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	return (a);
}

t_vec2	vec2_substract_vecs(t_vec2 a, t_vec2 b)
{
	a.x -= b.x;
	a.y -= b.y;
	return (a);
}
