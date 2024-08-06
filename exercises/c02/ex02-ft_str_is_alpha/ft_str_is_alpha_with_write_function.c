#include "unistd.h"
#include "stdio.h"

int ft_str_is_alpha(char *str) {

	int i;

	i = 0;
	
	if (str[i] == '\0'){
		write (1,"3",1);
		return 1;
	}
	
	while (str[i] != '\0'){
		
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')){
			write (1,"0",1);
			return 0;
		}
		i++;
	}

	write (1,"1",1);
	return 1;
}
