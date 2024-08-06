#include "ft_strcapitalize.c"
#include "unistd.h"

int main(){

        char *str;
	char *str1;
	char *str2;
	char *str3;
	char *r,*r1,*r2,*r3;
	
	char arr[40] = "HEL              LO\0\n";
	char arr1[40] = "INVITE ME TO HUMBERGER BANQUET\0\n";
	char arr2[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n";
	char arr3[40] = "\0";
        
        str = arr;
	str1 = arr1;
	str2 = arr2;
	str3 = arr3;


        r = ft_strcapitalize(str);
	r1 = ft_strcapitalize(str1);
        r2 = ft_strcapitalize(str2);
	r3 = ft_strcapitalize(str3);

	write (1,r,40);
	write (1,r1,40);
	write (1,r2,62);
	write (1,r3,40);

}
