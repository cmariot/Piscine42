void	ft_ultimate_div_mod(int *a, int *b)
{
	int result;
	int rest;

	result = *a / *b;
	rest = *a % *b;
	*a = result;
	*b = rest;
}
