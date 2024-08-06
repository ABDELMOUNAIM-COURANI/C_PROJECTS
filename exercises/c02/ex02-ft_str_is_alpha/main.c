#include "ft_str_is_alpha.c"

int main(){

        char *str;
	char *str1;
	char *str2;
	int r,r1,r2;
	
	char arr[40] = "Invite me 12 to a hamburger banquet";
	char arr1[40] = "InviteMeToHamburgerBanquet";
	char arr2[40] = "";
        
        str = arr;
	str1 = arr1;
	str2 = arr2;

        r = ft_str_is_alpha(str) + '0';
	r1 = ft_str_is_alpha(str1) + '0';
        r2 = ft_str_is_alpha(str2) + '0';

	write (1,&r,1);
	write (1,&r1,1);
	write (1,&r2,1);

}
