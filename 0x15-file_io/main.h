#include <stddef.h>
#include <unistd.h>
#ifndef MAIN_H
#define MAIN_H
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int strlength(char *str);
#endif
