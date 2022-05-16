#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

char *prompt(void);
char *strip_newline(char *str);
void sig_handler(int sig);

char *buf;
#endif