/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 20:11:38 by asvirido          #+#    #+#             */
/*   Updated: 2017/04/28 20:11:39 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../head.h"

int		calc(t_rtv1 *rtv1, int (*f)())
{
	int	size;
	int	i;

	size = SIZE_X * SIZE_Y;
	i = 0;
	while (i < size)
	{
		(*f)(i, RT);
		i++;
	}
	return (1);
}
