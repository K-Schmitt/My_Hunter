/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my_lib
*/

#pragma once
void my_putchar(char c);
int my_putstr(char const *str);
int alphanum(char const str);
int alphab(char const str);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_is_prime(int nb);
int my_put_nbr(int nb);
char *my_revstr(char *src);
int my_showmem(char const *str, int size);
char my_showstr(char const *str);
int my_sort_int_array(int *tab, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char my_str_isalpha(char *str);
char my_str_islower(char const *str);
char my_str_isnum(char const *str);
char my_str_isprintable(char const *str);
char my_str_isupper(char const *str);
int my_strlen (char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int my_intlenght(int value);
char *convert_int(int dec, int base);
int char_to_int(const char *format, int i);
