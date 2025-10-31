#include <unistd.h>


void ft_putnbr(int nb)
{
	long	nbl; // long is an int with 8 bits ;;;;;;
	char	c[10];
	short	i;

	nbl = nb;
	i = 0;
	if ( nb == 0 )
	{
		write(1, "0", 1);
		return ;
	}
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


int main () {


ft_putnbr(2147483647);
ft_putnbr(8346);

return 0;
}
