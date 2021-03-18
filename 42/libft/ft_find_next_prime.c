#include <unistd.h>

int ft_is_prime(int nb)
{

	int i;
	i = 2;
	if(nb == 0 || nb == 1)
	{
		return(0);
	}
	while(i < nb)
	{
		if(nb % i == 0)
		{
			return(0);
		}
		++i;
	}
	if(i == nb)
		return(1);
	else
		return(0);

}


int ft_find_next_prime(int nb)
{

	int i = 1;
	int result = 0;
	while(i < nb)
	{
		if(ft_is_prime(nb+i) == 1)
		{
			result = nb+i;
			return(result);
		}
		i++;
	}
	return(0);

}
