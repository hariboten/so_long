/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:38:52 by ewatanab          #+#    #+#             */
/*   Updated: 2021/08/21 11:02:46 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <so_long.h>

int		sl_clean(void *so_long)
{
	t_so_long *sl;

	sl = so_long;
	mlx_destroy_window(sl->mlx_ptr, sl->mlx_win);
	mlx_destroy_display(sl->mlx_ptr);
	free(sl->mlx_ptr);
	exit(0);
}

int		print_keycode(int keycode, void *so_long)
{
	if (keycode == KC_ESC)
		sl_clean(so_long);
	printf("%d\n", keycode);
	return (0);
}

int		so_long(t_so_long *sl)
{
	sl->mlx_ptr = mlx_init();
	sl->mlx_win = mlx_new_window(sl->mlx_ptr, 1080, 840, TITLE);
	mlx_key_hook(sl->mlx_win, print_keycode, (void *)sl);
	mlx_hook(sl->mlx_win, EV_DESTROY_NOTIFY, MASK_STRUCTURE_NOTIFY, sl_clean, (void *)sl);
	mlx_loop(sl->mlx_ptr);
	return (0);
}
