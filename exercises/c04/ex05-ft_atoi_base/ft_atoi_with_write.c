#include <unistd.h>

int ft_strlen(char *base){

	int length = 0;
	
	while (base[length] != '\0') {
		
		length++;
	
	}
	
	return length;

}


int is_valid_base(char *base) {

	int i;
	int j;
	int base_len;

	i = 0;

	
	base_len = ft_strlen(base);
	
	if (base_len <= 1){
		
		return 0;
	
	}
	
	while (i < base_len) {
		
		if (base[i] == '+' || base[i] == '-'){
			
			return 0;

		}

		j = i + 1;

		while(j < base_len){
			
			if (base[i] == base[j]){
				
				return 0;
			
			}
			j++;
		}
		i++;
	}
	
	return 1;

}

int ft_base(int nbr, char *base){
	
	char result[64];
	int base_len;
	int i;
	unsigned int unbr;
	
	base_len = ft_strlen(base);
        i = 0;

	if (!is_valid_base(base)){
		
		return;

	}
	
	if (nbr < 0) {
		
		write(1, "-", 1);
		
		unbr = (unsigned int)(-nbr);
	
	}
	
	else {
		
		unbr = (unsigned int)nbr;
	
	}
	
	if (unbr == 0) {
		
		return base[0];
	
	}
	
	while (unbr > 0) {
		
		result[i++] = base[unbr % base_len];
		
		unbr /= base_len;
	
	}
	
	while (i > 0) {
		
		return result;

	
	}

}

int ft_atoi_base(char *str, char * base){

	int i;
	int n;
	int sign;
	long integer;
	long result;
	long r;

	i = 0;
	n = 0;
	sign = 1;
	integer = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '){
		
		i++;
	
	}
	
	while (str[i] == '-' || str[i] == '+'){
		
		if (str[i] == '-'){
			
			n++;
		
		}
		
		i++;
	}
	
	if (n % 2 != 0){
		
		sign = -1;
	
	}
	
	while (str[i] >= '0' && str[i] <= '9'){
		
		integer = integer * 10 + (str[i] - 48);
		i++;
	
	}

	result = sign * integer;
	
	r = ft_base(result, *base);

	return r;

}

int main(void){

	char *str;
	char buffer[100];
	int length;
	int r;

	str = "   ---+--+1234ab567";
	length = 0;

	r = ft_atoi_base(str);
	
	if (r == 0){
		
		buffer[length++] = '0';
	}
	
	else {
		if (r < 0){
			
			write(1, "-", 1);
			r = -r;
		
		}
		
		while (r > 0){
			
			buffer[length++] = r % 10 + 48;
			r /= 10;
		
		}
	
	}
	
	while (length > 0){
		
		write (1, &buffer[--length], 1);
	
	}

}
