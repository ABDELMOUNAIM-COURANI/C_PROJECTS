#include "ft_print_memory.c"
#include "unistd.h"
#include "stdio.h"

int main(){

	char addr[] = "Coucou\ntu vas bien ? i am here, what are you looking for, i know the maker";

	ft_print_memory(addr, sizeof(addr) - 1);
	
}
