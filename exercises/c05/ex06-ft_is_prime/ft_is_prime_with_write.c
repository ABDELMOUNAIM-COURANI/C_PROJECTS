#include <unistd.h>

int ft_is_prime(int nb){

	int i;

	i = 2;
	
	if (nb < 2){
		
		return 0;

	}

	if (nb == 2 || nb == 3){

		return 1;

	}

	while (i <= (nb / i)){

		if (nb % i == 0){

			return 0;

		}

		else{
			
			i++;
		
		}
	}

	return 1;

}


int main (void){

	char buffer[30];
	int n;
	int i;

	n = ft_is_prime(77);
	i = 0;

	if (n == 0){

		write(1, "0", 1);

	}

	if (n < 0){

		write(1, "-", 1);
		n = -n;

	}

	while (n != 0){

		buffer[i++] = (n % 10) + '0';
		n /= 10;

	}

	while (i > 0){

		write (1, &buffer[--i], 1);

	}
}
