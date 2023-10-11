#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void command_exec(const char *execute);
void cb_print(const char *text);
void _prompt(void);

#endif
