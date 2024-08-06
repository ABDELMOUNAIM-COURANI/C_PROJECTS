#include "ft_putstr_non_printable.c"
#include "unistd.h"
#include "stdio.h"

int main(){

	char *r;

	char *str = "Coucou\ntu\fvas\abien\r?";

	ft_putstr_non_printable(str);

}
