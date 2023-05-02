/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_angleAxis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:14:33 by parallels         #+#    #+#             */
/*   Updated: 2023/04/03 18:40:50 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_quat4	vec3_angle_axis(t_vec3 v, t_vec angle)
{
	t_quat4	quat;
	t_vec	sin_value;

	angle *= 0.0174533;
	sin_value = sinf(angle);
	quat.a = v.x * sin_value;
	quat.b = v.y * sin_value;
	quat.c = v.z * sin_value;
	quat.d = cosf(angle);
	return (quat);
}
