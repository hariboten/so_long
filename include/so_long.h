/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewatanab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 21:47:29 by ewatanab          #+#    #+#             */
/*   Updated: 2021/08/20 23:02:51 by ewatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <stdlib.h>
# include <unistd.h>

# define TITLE "so_long"
# define EV_DESTROY_NOTIFY 17
# define MASK_STRUCTURE_NOTIFY (1L << 17)

typedef struct s_so_long t_so_long;

struct s_so_long
{
	void *mlx_ptr;
	void *mlx_win;
};

#endif
