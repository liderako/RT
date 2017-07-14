/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_shadow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:04:57 by asvirido          #+#    #+#             */
/*   Updated: 2017/05/17 22:22:03 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../head.h"

void	all_shadow(t_rtv1 *rtv1, int num_obj, t_val_vector *val, int *hit)
{
	int		i;
	double	dot;
	double	t;

	i = -1;
	while (++i < 1)
	{
		val->tmp = normal_vector(sub_vector(&L.position, &val->point));
		set_vector(L_RAY_DIRECTION, &val->tmp);
		val->tmp = sub_vector(&L.position, &val->point);
		t = module_vector(&val->tmp);
		hit[i] = light_intersect(rtv1, &t);
		if (hit[i] == 0)
			val->rgb[i] = shadow(val->rgb[i], 0.1);
	}
}
