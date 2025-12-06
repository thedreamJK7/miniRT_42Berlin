#include "./minilibxlinux/mlx.h"


int main()
{
    void    *mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 400, 400, "miniRT");
	for (int i = 0; i < 400; i++)
	{
		mlx_pixel_put(mlx_ptr, win_ptr, i, i, 250);
	}
	for (int i = 0; i < 400; i++)
	{
		mlx_pixel_put(mlx_ptr, win_ptr, 400 - i, i, 500);
	}
	mlx_loop(mlx_ptr);
    return (0);
}
