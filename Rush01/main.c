#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define TOP		0
#define BOTTOM		1
#define LEFT		2
#define RIGHT		3

#define TRUE		1
#define FALSE		0

int	ft_verif_arguments(char *argv);
int	**ft_tabtab_map(void);
int	**ft_add_arg(char *argv);
int	*ft_convert_argv_to_array(char *argv);
int	ft_atoi_argv(char **str);
void	ft_putchar(char c);
void	ft_putnbr(int po);
int	ft_print_tab(int ***tab);
int	ft_backtrack(int **tab, int **cond, int iter);
int	ft_is_unique(int **tab, int row, int col);
int	ft_check_row(int **tab, int **cond, int dir, int is_rev);
int	ft_check_col(int **tab, int **cond, int dir, int is_rev);

int	main (int argc, char **argv)
{
	//tableau de tableau de int
	int **tab;
	//tableau de tableau de conditions
	int **cond;
	//Si on a le bon nombre d'arguments
	if (argc == 2)
	{	
		//Si les arguments sont bien organises, avec le bon nombre d'espaces 
		if (ft_verif_arguments(argv[1]) == 1)
		{
			//On cree la map avec des tableaux de tableaux
			tab = ft_tabtab_map();
			//On ajoute les arguments au tableau
			cond = ft_add_arg(argv[1]);
			
			if(ft_backtrack(tab, cond, 0) == 1)
			{
				return (ft_print_tab(&tab));
			}
		}
	}
	return (0);
}

//1 verif du nombre d'arguments et des espaces entres.
int	ft_verif_arguments(char *argv)
{
	int nb_arguments;
	int space;

	nb_arguments = 0;
	space = 1;
	while (*argv != '\0')
	{
		if (*argv == ' ')
			space = 1;
		else
		{
			if (space == 1)
				nb_arguments++;
			space = 0;
		}
		argv++;
	}
	if (nb_arguments == 16)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

//2 genere une map de 4 par 4 contenant des pointeurs sur pointeurs (chaines de car)
int	**ft_tabtab_map(void)
{
	int x;
	int y;
	int **tabtab;

	tabtab = (int **)malloc(sizeof(int *) * 4);
	x = 0;
	while (x < 4)
	{
		y = 0;
		tabtab[x] = (int *)malloc(sizeof(int) * 4);
		while (y < 4)
		{
			tabtab[x][y] = 0;
			y++;
		}
		x++;
	}
	return (tabtab);
}

//3 on ajoute les arguments dans le tableau 
int	**ft_add_arg(char *argv)
{
	int **tab;
	int *ptr;
	int i;
	int j;

	tab = (int **)malloc(sizeof(int *) * 4);
	i = 0;
	while (i < 4)
	{
		tab[i] = (int *)malloc(sizeof(int) * 4);
		i++;
	}
	ptr = ft_convert_argv_to_array(argv);
	i = 0;
	j = 0;
	while (i < 4)
	{
		tab[TOP][i] = ptr[j++];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		tab[BOTTOM][i] = ptr[j++];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		tab[LEFT][i] = ptr[j++];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		tab[RIGHT][i] = ptr[j++];
		i++;
	}
	free(ptr);
	return (tab);
}

//3a on convertit les arguments en int pour les ajouter dans le tableau
int	*ft_convert_argv_to_array(char *argv)
{
	int *nb;
	int i;

	nb = (int *)malloc(sizeof(int) * 16);
	i = 0;
	while (*argv && i < 16)
	{
		nb[i] = ft_atoi_argv(&argv);
		i++;
	}
	return (nb);
}

//3b on convertit l'argument en int
int	ft_atoi_argv(char **str)
{
	int nb;

	nb = 0;
	while (**str && **str == ' ')
		(*str)++;
	while (**str && **str >= '0' && **str <= '9')
		nb = (nb * 10) + (*(*str)++ - '0');
	return(nb);
}

//4 on affiche le tableau
int	ft_print_tab(int ***tab)
{
	int x;
	int y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ft_putnbr((*tab)[x][y]);
			if (y < 3)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
	free(*tab);
	return (0);
}

//4a on affiche les caracteres 
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//4b on affiche les nombres
void	ft_putnbr(int po)
{
	int		a;
	int		b;
	int		c;
	long int	nb;

	nb = po;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if ((nb >= 0) && (nb <= 9))
	{
		a = 48 + nb;
		ft_putchar(a);
	}
	else
	{
		b = nb / 10;
		ft_putnbr(b);
		c = (nb % 10) + '0';
		ft_putchar(c);
	}
}

//BACKTRACK
int	ft_backtrack(int **tab, int **cond, int iter)
{
	int	row;
	int	col;
	int	i;

	if (iter == 16)
	{
		return (ft_check_col(tab, cond, BOTTOM, TRUE)
			&& ft_check_col(tab, cond, TOP, FALSE)
			&& ft_check_row(tab, cond, LEFT, TRUE)
			&& ft_check_row(tab, cond, RIGHT, FALSE));
	}
	row = iter / 4;
	col = iter % 4;
	i = 1;
	while (i <= 4)
	{
		tab[row][col] = i;
		i++;
		if (ft_is_unique(tab, row, col) && ft_backtrack(tab, cond, iter + 1))
			return (TRUE);
	}
	tab[row][col] = 0;
	return (FALSE);
}	

int	ft_is_unique(int **tab, int row, int col)
{
	int	i;

	i = -1;
	while (++i < 4)
		if ((i != col && tab[row][i] == tab[row][col]) ||
			(i != row && tab[i][col] == tab[row][col]))
			return (FALSE);
	return (TRUE);
}

int	ft_check_row(int **tab, int **cond, int dir, int is_rev)
{
	int	col;
	int	row;
	int	max;
	int	sum;

	row = -1;
	while (++row < 4)
	{
		if (cond[dir][row] != FALSE)
		{
			sum = 0;
			max = 0;
			col = is_rev == TRUE ? 0 : 3;
			while ((is_rev && col < 4) || (!is_rev && col >= 0))
			{
				if (tab[row][col] > max && \
					(max = tab[row][col]) == tab[row][col])
					++sum;
				col += is_rev ? 1 : -1;
			}
			if (cond[dir][row] != sum)
				return (FALSE);
		}
	}
	return (TRUE);
}

int	ft_check_col(int **tab, int **cond, int dir, int is_rev)
{
	int	col;
	int	row;
	int	max;
	int	sum;

	col = 0;
	while (col < 4)
	{
		if (cond[dir][col] != FALSE)
		{
			sum = 0;
			max = 0;
			row = is_rev == TRUE ? 3 : 0;
			while ((is_rev && row >= 0) || (!is_rev && row < 4))
			{
				if (tab[row][col] > max && \
					(max = tab[row][col]) == tab[row][col])
					++sum;
				row += is_rev ? -1 : 1;
			}
			if (cond[dir][col] != sum)
				return (FALSE);
		}
		col++;
	}
	return (TRUE);
} 
