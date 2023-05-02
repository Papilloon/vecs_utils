/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec_min_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parallels <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:17:18 by parallels         #+#    #+#             */
/*   Updated: 2023/03/31 13:34:07 by parallels        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_utils.h"

t_vec	tvec_min(t_vec nb, t_vec min)
{
	if (nb > min)
		return (min);
	return (nb);
}

t_vec	tvec_max(t_vec nb, t_vec max)
{
	if (nb < max)
		return (max);
	return (nb);
}
