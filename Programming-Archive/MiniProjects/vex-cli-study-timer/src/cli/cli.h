#ifndef CLI_H
#define CLI_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "../timer/timer.h"

int is_int(char *str);
int parse_timer_args(int argc, char *argv[], timer_config_t *timer_config);

#endif