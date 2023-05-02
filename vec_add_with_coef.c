/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_add_with_coef.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:59:56 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 11:05:58 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_vec4	vec4_add_with_coef(t_vec4 a, t_vec a_coef, t_vec4 b, t_vec b_coef)
{
	a.x = a.x * a_coef + b.x * b_coef;
	a.y = a.y * a_coef + b.y * b_coef;
	a.z = a.z * a_coef + b.z * b_coef;
	a.a = a.a * a_coef + b.a * b_coef;
	return (a);
}

t_vec3	vec3_add_with_coef(t_vec3 a, t_vec a_coef, t_vec3 b, t_vec b_coef)
{
	a.x = a.x * a_coef + b.x * b_coef;
	a.y = a.y * a_coef + b.y * b_coef;
	a.z = a.z * a_coef + b.z * b_coef;
	return (a);
}
