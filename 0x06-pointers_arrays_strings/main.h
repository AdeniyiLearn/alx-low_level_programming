#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
gnt main(void);
char *_strncpy(char *dest, char *src, int n);
void print_buffer(char *b, int size);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *s);
char *leet(char *s);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_number(int n);
char *rot13(char *);

#endif /* MAIN_H */
