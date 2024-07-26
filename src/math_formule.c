/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_formule.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 13:33:56 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/07/25 12:39:36 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_fvec3	dive(t_fvec3 a, double b)
{
	double	c;
	t_fvec3	d;

	c = 1 / b;
	d.x = c * a.x;
	d.y = c * a.y;
	d.z = c * a.z;
	return (d);
}

t_fvec3	negat(t_fvec3 a)
{
	t_fvec3	d;

	d.x = -a.x;
	d.y = -a.y;
	d.z = -a.z;
	return (d);
}

t_fvec3	sub(t_fvec3 a, t_fvec3 b)
{
	t_fvec3	c;

	c.x = a.x - b.x;
	c.y = a.y - b.y;
	c.z = a.z - b.z;
	return (c);
}

t_fvec3	sum(t_fvec3 a, t_fvec3 b)
{
	t_fvec3	c;

	c.x = a.x + b.x;
	c.y = a.y + b.y;
	c.z = a.z + b.z;
	return (c);
}

t_fvec3	x_vec3(t_fvec3 a, t_fvec3 b)
{
	t_fvec3	c;

	c.x = a.x * b.x;
	c.y = a.y * b.y;
	c.z = a.z * b.z;
	return (c);
}
