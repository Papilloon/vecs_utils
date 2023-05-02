/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_look_at.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:42:50 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 18:08:59 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_mat4	look_at(t_vec3 pos, t_vec3 dir, t_vec3 up_dir, t_mat4 mat)
{
	t_vec3	forward;
	t_vec3	upward;
	t_vec3	side;

	forward = vec3_normalized(vec3_substract_vecs(pos, dir));
	side = vec3_normalized(vec3_cross(forward, up_dir));
	upward = vec3_normalized(vec3_cross(side, forward));
	mat[0] = side.x;
	mat[1] = upward.x;
	mat[2] = -forward.x;
	mat[3] = 0.0;
	mat[4] = side.y;
	mat[5] = upward.y;
	mat[6] = -forward.y;
	mat[7] = 0.0;
	mat[8] = side.z;
	mat[9] = upward.z;
	mat[10] = -forward.z;
	mat[11] = 0.0;
	mat[12] = 0.0;
	mat[13] = 0.0;
       	mat[14] = 0.0;
	mat[15] = 1.0;
	return (mat);
}
