#ifndef CLI_H
#define CLI_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "../timer/timer.h"

#define FLAGS_ERROR 0
#define SESSION_ERROR 2
#define SESSION_TIME_ERROR 3
#define BREAK_TIME_ERROR 4
#define ARGC_ERROR 5

int is_int(char *str);
int parse_timer_args(int argc, char *argv[], timer_config_t *timer_config);

#endif