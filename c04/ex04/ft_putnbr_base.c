#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int check_is_valid_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (ft_strlen(base) < 2 || base[0] == '\0' || base[1] == '\0')
		return (0);
	while(base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (i < ft_strlen(base))
	{
		j = i + 1;
		while(j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return(0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	i;

	if (check_is_valid_base(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr	= -nbr;
		}
		i = nbr;
		if (i < ft_strlen(base))
		{
			ft_putchar(base[i]);
		}
		else
		{
			ft_putnbr_base(i / ft_strlen(base), base);
			ft_putnbr_base(i % ft_strlen(base), base);
		}
	}
}
