#include <so_long.h>

int		clean(void *so_long)
{
	t_so_long *sl;

	sl = so_long;
	mlx_destroy_window(sl->mlx_ptr, sl->mlx_win);
	mlx_destroy_display(sl->mlx_ptr);
	free(sl->mlx_ptr);
	exit(0);
}

int		main(void)
{
	t_so_long sl;

	sl.mlx_ptr = mlx_init();
	sl.mlx_win = mlx_new_window(sl.mlx_ptr, 1080, 840, TITLE);
	mlx_hook(sl.mlx_win, EV_DESTROY_NOTIFY, MASK_STRUCTURE_NOTIFY, clean, (void *)&sl);
	mlx_loop(sl.mlx_ptr);
	return (0);
}
