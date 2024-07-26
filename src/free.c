/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <sonouelg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 13:38:41 by mmahfoud          #+#    #+#             */
/*   Updated: 2024/07/25 12:48:54 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	free_scene(t_scene **scene)
{
	if (*scene)
	{
		if ((*scene)->tab_cy)
		{
			free_tab_cy(&((*scene)->tab_cy));
			free((*scene)->tab_cy);
		}
		if ((*scene)->tab_pl)
		{
			free_tab_pl(&((*scene)->tab_pl));
			free((*scene)->tab_pl);
		}
		if ((*scene)->tab_sp)
		{
			free_tab_sp(&((*scene)->tab_sp));
			free((*scene)->tab_sp);
		}
		free(*scene);
		*scene = NULL;
	}
}

void	free_all(t_w *w)
{
	free_tab_inter(w);
	free_scene(&w->scene);
}

void	free_tab_cy(t_cylindre ***cylindre)
{
	t_cylindre	*tmp;

	if (**cylindre)
	{
		tmp = (**cylindre);
		while (tmp)
		{
			**cylindre = (**cylindre)->next;
			free(tmp);
			tmp = **cylindre;
		}
		free(*cylindre);
		*cylindre = NULL;
	}
}
