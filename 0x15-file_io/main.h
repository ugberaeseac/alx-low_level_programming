#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stats.h>
#include <sys/types.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _error(int fd, int err_code, char *str);

#endif /* ifndef MAIN_H */
