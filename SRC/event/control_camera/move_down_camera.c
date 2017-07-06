/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_down_camera.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 01:32:26 by asvirido          #+#    #+#             */
/*   Updated: 2017/05/17 22:12:01 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../head.h"

void	move_down_camera(t_rtv1 *rtv1)
{
	rtv1->ray->origin->y += 100;
	int 	i;

	i = -1;
	while (++i < SIZE)
		RT->screen[i].ray->y += 100;
}
