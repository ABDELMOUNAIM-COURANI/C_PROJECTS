#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_hex(unsigned char byte) {
    char hex_digits[16];
    int i;

    i = 0;
    while (i < 10) {
        hex_digits[i] = '0' + i;
        i++;
    }
    while (i < 16) {
        hex_digits[i] = 'a' + i - 10;
        i++;
    }

    ft_putchar(hex_digits[byte / 16]);
    ft_putchar(hex_digits[byte % 16]);
}

void ft_print_address(unsigned long address) {
    char hex_address[17];
    int i;

    i = 0;
    while (i < 16) {
        hex_address[i] = '0';
        i++;
    }
    hex_address[16] = '\0';

    i = 15;
    while (i >= 0 && address != 0) {
        if ((address % 16) < 10) {
            hex_address[i] = (address % 16) + '0';
        } else {
            hex_address[i] = (address % 16) - 10 + 'a';
        }
        address /= 16;
        i--;
    }

    i = 0;
    while (hex_address[i] != '\0') {
        ft_putchar(hex_address[i]);
        i++;
    }
}

void ft_print_char(unsigned char c) {
    if (c >= 32 && c <= 126) {
        ft_putchar(c);
    } else {
        ft_putchar('.');
    }
}

void *ft_print_memory(void *addr, unsigned int size) {
    unsigned int i;
    unsigned int j;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char *)addr;

    while (i < size) {
        ft_print_address((unsigned long)(ptr + i));
        
	write(1, ":", 1);

        j = 0;
        while (j < 16) {
            if (i + j < size) {
                ft_print_hex(ptr[i + j]);
            } else {
                ft_putchar(' ');
                ft_putchar(' ');
            }
            if (j % 2 == 1) {
                ft_putchar(' ');
            }
            j++;
        }

        j = 0;
        while (j < 16 && i + j < size) {
            ft_print_char(ptr[i + j]);
            j++;
        }

        ft_putchar('\n');
        i += 16;
    }

    return addr;
}

int main(void) {
    char addr[] = "Coucou\ntu vas bien ? i am here, what are you looking for, i know the maker";
    ft_print_memory(addr, sizeof(addr) - 1);
}

