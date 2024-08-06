#include "ft_strupcase.c"
#include "unistd.h"

int main(){

        char *str;
	char *str1;
	char *str2;
	char *str3;
	char *r,*r1,*r2,*r3;
	
	char arr[40] = "hello\0\n";
	char arr1[40] = "invite me to hamburger banquet\0\n";
	char arr2[40] = "hahahaha\n";
	char arr3[40] = "\0";
        
        str = arr;
	str1 = arr1;
	str2 = arr2;
	str3 = arr3;


        r = ft_strupcase(str);
	r1 = ft_strupcase(str1);
        r2 = ft_strupcase(str2);
	r3 = ft_strupcase(str3);

	write (1,r,40);
	write (1,r1,40);
	write (1,r2,40);
	write (1,r3,40);

}
