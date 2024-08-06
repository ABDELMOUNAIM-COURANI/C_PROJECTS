#include "ft_str_is_printable.c"
#include "unistd.h"

int main(){

        char *str;
	char *str1;
	char *str2;
	char *str3;
	int r,r1,r2,r3;
	
	char arr[40] = "\a";
	char arr1[40] = "invitemetohamburgerbanquet";
	char arr2[40] = "HAHAHAHA";
	char arr3[40] = "";
        
        str = arr;
	str1 = arr1;
	str2 = arr2;
	str3 = arr3;


        r = ft_str_is_printable(str) + '0';
	r1 = ft_str_is_printable(str1) + '0';
        r2 = ft_str_is_printable(str2) + '0';
	r3 = ft_str_is_printable(str3) + '0';

	write (1,&r,1);
	write (1,&r1,1);
	write (1,&r2,1);
	write (1,&r3,1);

}
