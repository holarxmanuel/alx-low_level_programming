#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* putchar.c */
int _putchar(char c);

/* _islower.c */
int _islower(int c);

/* _isalpha.c */
int _isalpha(int c);

/* _abs.c */
int _abs(int n);

/* _isupper.c */
int _isupper(int c);

/* _isdigit.c */
int _isdigit(int c);

/* _strlen.c */
int _strlen(char *s);

/* _puts.c */
void _puts(char *s);

/* _strcpy.c */
char *_strcpy(char *dest, char *src);

/* _atoi.c */
int _atoi(char *s);

/* _strcat.c */
char *_strcat(char *dest, char *src);

/* _strncat.c */
char *_strncat(char *dest, char *src, int n);

/* _strncpy.c */
char *_strncpy(char *dest, char *src, int n);

/* _strcmp.c */
int _strcmp(char *s1, char *s2);

/* _memset.c */
char *_memset(char *s, char b, unsigned int n);

/* _memcpy.c */
char *_memcpy(char *dest, char *src, unsigned int n);

/* _strchr.c */
char *_strchr(char *s, char c);

/* _strspn.c */
unsigned int _strspn(char *s, char *accept);

/* _strpbrk.c */
char *_strpbrk(char *s, char *accept);

/* _strstr.c */
char *_strstr(char *haystack, char *needle);

/* _write.c */
ssize_t _write(int fd, const void *buf, size_t count);

#endif /* MAIN_H */
