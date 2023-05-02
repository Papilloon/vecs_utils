/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_reflect.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:32:03 by parallels         #+#    #+#             */
/*   Updated: 2023/04/04 10:36:04 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_vec3	vec3_reflect(t_vec3 a, t_vec3 b)
{
	t_vec	vec_dot;
       
	vec_dot = a.x * b.x + a.y * b.y + a.z * b.z;
	a.x = a.x - 2.0f * vec_dot * b.x;
	a.y = a.y - 2.0f * vec_dot * b.y;
	a.z = a.z - 2.0f * vec_dot * b.z;
	return (a);
}
