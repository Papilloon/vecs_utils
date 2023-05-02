/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:29:24 by parallels         #+#    #+#             */
/*   Updated: 2023/04/04 15:53:58 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_UTILS_H
# define VEC_UTILS_H

#include <math.h>
#include <stdlib.h>

typedef float t_vec;
typedef t_vec* t_mat4;

typedef struct s_quat4
{
	t_vec	a;
	t_vec	b;
	t_vec	c;
	t_vec	d;
}	t_quat4;

typedef struct s_vec2
{
	t_vec x;
	t_vec y;
}	t_vec2;

typedef struct s_vec3
{
	t_vec	x;
	t_vec	y;
	t_vec	z;
}	t_vec3;

typedef struct s_vec4
{
	t_vec	x;
	t_vec	y;
	t_vec	z;
	t_vec	a;
}	t_vec4;

typedef struct	s_vec_pos
{
	t_vec3	a;
	t_vec3	b;
}	t_vec_pos;

typedef struct	s_hit_point
{
	t_vec3	pos;
	t_vec3	dir;
	t_vec4	color;
	t_vec	reflect;
}	t_hit_point;

t_vec_pos	vec_pos(t_vec3 a, t_vec3 b);

t_mat4	mat4(t_vec value);
t_mat4	look_at(t_vec3 pos, t_vec3 dir, t_vec3 up_dir, t_mat4 mat);

t_quat4	new_quat4(t_vec value);
t_quat4	quat4(t_vec a, t_vec b, t_vec c, t_vec d);
t_quat4	quat4_cross(t_quat4 a, t_quat4 b);
t_quat4	quat4_normalized(t_quat4 q);

t_vec2	new_vec2(t_vec value);
t_vec2	vec2(t_vec x, t_vec y);
t_vec2	vec2_substract_vecs(t_vec2 a, t_vec2 b);
t_vec2	vec2_multiply_tvec(t_vec2 a, t_vec f);
t_vec	vec2_angle_bet(t_vec2 a, t_vec2 b);

t_vec3	new_vec3(t_vec value);
t_vec3	vec3(t_vec x, t_vec y, t_vec z);
t_vec3	vec3_normalized(t_vec3 vec);
t_vec3	vec3_substract_vecs(t_vec3 a, t_vec3 b);
t_vec3	vec3_substract_coef(t_vec3 a, t_vec coef);
t_vec	vec3_dot(t_vec3 a, t_vec3 b);
t_vec3	vec3_add_with_coef(t_vec3 a, t_vec a_coef, t_vec3 b, t_vec b_coef);
t_vec3	vec3_clamp(t_vec3 src, t_vec3 min, t_vec3 max);
t_vec3	vec3_multiply(t_vec3 a, t_vec3 b);
t_vec3	vec3_multiply_tvec(t_vec3 a, t_vec f);
t_vec3	vec3_cross(t_vec3 a, t_vec3 b);
t_quat4	vec3_angle_axis(t_vec3, t_vec angle);
t_vec3	vec3_rotate(t_vec3 v, t_quat4 q);
t_vec3	vec3_add(t_vec3 a, t_vec3 b);
t_vec3	vec3_reflect(t_vec3 a, t_vec3 b);
t_vec	vec3_angle_bet(t_vec3 a, t_vec3 b);

t_vec4	new_vec4(t_vec value);
t_vec4	vec4(t_vec x, t_vec y, t_vec z, t_vec a);
t_vec4	vec4_normalized(t_vec4 vec);
t_vec4	vec4_substract_vecs(t_vec4 a, t_vec4 b);
t_vec4	vec4_substract_coef(t_vec4 a, t_vec coef);
t_vec	vec4_dot(t_vec4 a, t_vec4 b);
t_vec4	vec4_add_with_coef(t_vec4 a, t_vec a_coef, t_vec4 b, t_vec b_coef);
t_vec4	vec4_clamp(t_vec4 src, t_vec4 min, t_vec4 max);

t_vec	tvec_min(t_vec nb, t_vec min);
t_vec	tvec_max(t_vec nb, t_vec max);

#endif
