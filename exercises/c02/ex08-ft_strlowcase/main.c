#include "ft_strlowcase.c"
#include "unistd.h"

int main(){

        char *str;
	char *str1;
	char *str2;
	char *str3;
	char *r,*r1,*r2,*r3;
	
	char arr[40] = "HELLO\0\n";
	char arr1[40] = "INVITE ME TO HUMBERGER BANQUET\0\n";
	char arr2[40] = "HAHAHAHA\n";
	char arr3[40] = "\0";
        
        str = arr;
	str1 = arr1;
	str2 = arr2;
	str3 = arr3;


        r = ft_strlowcase(str);
	r1 = ft_strlowcase(str1);
        r2 = ft_strlowcase(str2);
	r3 = ft_strlowcase(str3);

	write (1,r,40);
	write (1,r1,40);
	write (1,r2,40);
	write (1,r3,40);

}
