/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_multiply.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:20:56 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 14:30:34 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_vec2	vec2_multiply_tvec(t_vec2 a, t_vec f)
{
	a.x *= f;
	a.y *= f;
	return (a);
}

t_vec3	vec3_multiply_tvec(t_vec3 a, t_vec f)
{
	a.x *= f;
	a.y *= f;
	a.z *= f;
	return (a);
}

t_vec3	vec3_multiply(t_vec3 a, t_vec3 b)
{
	a.x *= b.x;
	a.y *= b.y;
	a.z *= b.z;
	return (a);
}
