/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_angle_bet.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:15:52 by parallels         #+#    #+#             */
/*   Updated: 2023/04/04 15:56:33 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_vec	vec3_angle_bet(t_vec3 a, t_vec3 b)
{
	t_vec	angle;
	t_vec	dot;
	t_vec	n1;
	t_vec	n2;

	dot = a.x * b.x + a.y * b.y + a.z * b.z;
	n1 = a.x * a.x + a.y * a.y + a.z * a.z;
	n2 = b.x * b.x + b.y * b.y + b.z * b.z;
	n1 = sqrt(n1);
	n2 = sqrt(n2);

	angle =  (acos(dot / (n1 * n2)) / 0.0174533);
	if (angle < 0)
		angle = -angle;
	return (angle);
}

t_vec	vec2_angle_bet(t_vec2 a, t_vec2 b)
{
	t_vec	angle;
	t_vec	dot;
	t_vec	n1;
	t_vec	n2;

	dot = a.x * b.x + a.y * b.y;
	n1 = a.x * a.x + a.y * a.y;
	n2 = b.x * b.x + b.y * b.y;
	n1 = sqrt(n1);
	n2 = sqrt(n2);

	angle =  (acos(dot / (n1 * n2)) / 0.0174533);
	return (angle);
}
