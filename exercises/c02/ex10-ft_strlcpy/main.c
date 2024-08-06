#include "ft_strlcpy.c"
#include "unistd.h"
#include "stdio.h"

int main(){

        char dest[40];
	unsigned int r;
	unsigned int size;

	char *src = "INVITE ME TO HUMBERGER BANQUET\0";

	size = sizeof(dest);

        r = ft_strlcpy(dest, src, size);

	char buffer[10];
    
	int i, j;
	
	i = 0;
	j = 0;

    
	if (r == 0) {
        
		buffer[i] = '0';
    
	} else {
        
		unsigned int num = r;
        
		while (num > 0) {
            
			buffer[i++] = (num % 10) + '0';
            
			num /= 10;
        
		}
    
	}

    // Reverse the string
    
	while (j < i / 2) {
        
		char temp = buffer[j];
        
		buffer[j] = buffer[i - 1 - j];
        
		buffer[i - 1 - j] = temp;

		j++;
    
	}

    // Write the number to stdout
    
	write(1, buffer, i);

    
	write(1, "\n", 1);

    
	return 0;
}
