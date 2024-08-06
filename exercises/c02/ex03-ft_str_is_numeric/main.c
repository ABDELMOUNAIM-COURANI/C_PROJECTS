#include "ft_str_is_numeric.c"
#include "unistd.h"

int main(){

        char *str;
	char *str1;
	char *str2;
	char *str3;
	int r,r1,r2,r3;
	
	char arr[40] = "123456lk789";
	char arr1[40] = "InviteMeToHamburgerBanquet";
	char arr2[40] = "123456789";
	char arr3[40] = "";
        
        str = arr;
	str1 = arr1;
	str2 = arr2;
	str3 = arr3;


        r = ft_str_is_numeric(str) + '0';
	r1 = ft_str_is_numeric(str1) + '0';
        r2 = ft_str_is_numeric(str2) + '0';
	r3 = ft_str_is_numeric(str3) + '0';

	write (1,&r,1);
	write (1,&r1,1);
	write (1,&r2,1);
	write (1,&r3,1);

}
