int	g_i;
int	g_count;
double	g_m;
double	g_nb;

double	ft_atoi(char *str)
{
	g_i = 0;
	g_count = 0;
	g_m = 1;
	g_nb = 0;
	while (str[g_i] == '+' || str[g_i] == '-')
	{
		if (str[g_i] == '-')
			g_count++;
		g_i++;
	}
	if (g_count % 2 == 1)
		g_m = g_m * -1;
	while (str[g_i] >= '0' && str[g_i] <= '9')
	{
		g_nb = g_nb * 10 + (str[g_i] - '0');
		g_i++;
		if (! (str[g_i] >= '0' || str[g_i] <= '9'))
			break ;
	}
	return (g_m * g_nb);
}