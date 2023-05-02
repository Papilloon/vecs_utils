/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_normalized.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:46:16 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 16:48:09 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_quat4	quat4_normalized(t_quat4 q)
{
	float	len;

	len = (float)sqrt(q.a * q.a + q.b * q.b + q.c * q.c + q.d * q.d);
	q.a /= len;
	q.b /= len;
	q.c /= len;
	q.d /= len;
	return (q);
}
