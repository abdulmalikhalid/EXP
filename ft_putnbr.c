#include <unistd.h>

void ft_chick(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
}
void ft_putnbr(int nb)
{
	long	nbl; // long is an int with 8 bits ;;;;;;
	char	c[10];
	short	i;

	nbl = nb;
	i = 0;
	ft_chick(nb);
	if ( nbl < 0 )
	{
	nbl*=-1;
	write(1, "-", 1);
	}
	while( nbl % 10 )
	{
		c[i] = (nbl % 10 ) + '0';
		nbl /=10;
	        i++;	
	}
	while ( i >= 0 ) // for printing the number .. you start from the last element ( which is the first num's digit ) until 0;;;;;
	{
		write (1, &c[i], 1);
		i--;
	}
}


/*int main () {


ft_putnbr(2147483647);
ft_putnbr(-2147483);

return 0;
}
