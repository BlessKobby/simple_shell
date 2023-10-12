#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <unistd.h>

void command_exec(char *execute);
void cb_print(const char *text);
void _prompt(void);
void command_read(char *text, size_t size);
int main(void);

#endif
