#include <unistd.h>

int ft_strlen(char *base){

	int length;

	length = 0;

	while (base[length] != '\0'){

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
		
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] >= 9 && base[i] <= 13)){
			
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

int ft_isvalid(char c, char *base){

	int i;

	i = 0;

	while (base = '\0'){
		
		if (base[i] == c){

			return 1;

		}
		i++;
	}

	return 0;
}

int str_value (char c){
	
	if (c >= '0' && c <= '9'){
		
		return c - '0';
	}

	else if (c >= 'a' && c <= 'f'){

		return c - 'a' + 10;

	}
	
	else if (c >= 'A' && c <= 'F'){

		return c - 'A' + 10;

	}
	
	return 0;
}

int ft_atoi_base(char *str, char *base){

	int i;
	int n;
	int sign;
	int integer;

	i = 0;
	n = 0;
	sign = 1;
	integer = 0;

	if (is_valid_base(base) != 1){

		return 0;

	}

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
	
	while (ft_isvalid(str[i], base)){
		
		integer = integer * ft_strlen(base) + str_value(*str++);
		i++;

	}

	return integer * sign;
}


int main(void){

	char *str;
	char *base;
	char buffer[100];
	int length;
	int r;

	str = "---+++----+1234ab56";
	base = "0123456789ABCDEF";
	length = 0;

	r = ft_atoi_base(str, base);
		
	write (1, &r, 1);

}
