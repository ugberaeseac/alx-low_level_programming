#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

void _elf_check(unsigned char *e_ident);
void _print_magic(unsigned char *e_ident);
void _print_class(unsigned char *e_ident);
void _print_data(unsigned char *e_ident);
void _print_version(unsigned char *e_ident);
void _print_abi(unsigned char *e_ident);
void _print_osabi(unsigned char *e_ident);
void _print_type(unsigned int e_type, unsigned char *e_ident);
void _print_entry(unsigned long int e_entry, unsigned char *e_ident);
void _close_elf(int elf);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _error(int fd, int err_code, char *str);

#endif /* ifndef MAIN_H */
