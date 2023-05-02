/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_vec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:49:13 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 14:27:43 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_vec2	new_vec2(t_vec value)
{
	t_vec2	vec;

	vec.x = value;
	vec.y = value;
	return (vec);
}

t_vec4	new_vec4(t_vec value)
{
	t_vec4	vec;

	vec.x = value;
	vec.y = value;
	vec.z = value;
	vec.a = value;
	return (vec);
}

t_vec3	new_vec3(t_vec value)
{
	t_vec3	vec;

	vec.x = value;
	vec.y = value;
	vec.z = value;
	return (vec);
}
