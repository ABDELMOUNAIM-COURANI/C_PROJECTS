
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	ch;
	char *hex;
	int i;

	i = 0;

	hex = "0123456789abcdef";

	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126){
			
			ft_putchar(str[i]);
		}
		
		else{
			ft_putchar('\\');
			ch = str[i] / 16;
			ft_putchar(hex[ch]);
			ch = str[i] % 16;
			ft_putchar(hex[ch]);
		}
		i++;
	}
}
