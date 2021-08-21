/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:47:29 by ewatanab          #+#    #+#             */
/*   Updated: 2021/08/21 10:48:31 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define TITLE "so_long"
# define EV_DESTROY_NOTIFY 17
# define MASK_STRUCTURE_NOTIFY (1L << 17)

typedef enum s_keycode t_keycode;
typedef struct s_so_long t_so_long;

enum s_keycode
{
	KC_W = 119,
	KC_A = 97,
	KC_S = 115,
	KC_D = 100,
	KC_ESC = 65307
};

struct s_so_long
{
	void *mlx_ptr;
	void *mlx_win;
};

int		so_long(t_so_long *sl);

#endif
