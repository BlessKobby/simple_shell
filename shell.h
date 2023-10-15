#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <unistd.h>

void text_exec(const char *execute);
void cb_print(const char *text);
void prompt(void);
void text_read(char *text, size_t size);

#endif
