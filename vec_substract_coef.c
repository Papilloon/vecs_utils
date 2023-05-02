/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_substract_coef.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:51:53 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 11:12:48 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_vec4	vec4_substract_coef(t_vec4 a, t_vec coef)
{
	a.x -= coef;
	a.z -= coef;
	a.y -= coef;
	a.a -= coef;
	return (a);
}

t_vec3	vec3_substract_coef(t_vec3 a, t_vec coef)
{
	a.x -= coef;
	a.z -= coef;
	a.y -= coef;
	return (a);
}
