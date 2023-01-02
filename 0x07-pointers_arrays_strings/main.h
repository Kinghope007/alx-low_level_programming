#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int_strspn(char *s, char *accept);
char *_strbrk(char *s, char *accept);
char *strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsum(int *a,int size);
void set_string(char *ss, char *to);

#endif