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

int is_int(char *str)
{
    if (*str == '+' && *(str + 1) != '\0')
        str++;

    while (*str != '\0')
    {
        if (!isdigit((unsigned char)*str))
            return 0;
        str++;
    }
    return 1;
}

int parse_timer_args(int argc, char *argv[], timer_config_t *timer_config)
{

    if (argc != 7)
    {
        fprintf(stderr, "E: The vex-timer command requires exactly 6 arguments.\n");
        fprintf(stderr, "Usage: vex-timer -s <session> -t <session_time> -b <break-time>\n");
        return ARGC_ERROR;
    }

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-s") == 0)
        {
            if (i + 1 < argc && is_int(argv[i + 1]) == 1)
            {
                timer_config->session = atoi(argv[i + 1]);
                i++;
            }
            else
            {
                fprintf(stderr, "E: The session value is not valid\n");
                return SESSION_ERROR;
            }
        }
        else if (strcmp(argv[i], "-t") == 0)
        {
            if (i + 1 < argc && is_int(argv[i + 1]) == 1)
            {
                timer_config->session_time = atoi(argv[i + 1]);
                i++;
            }
            else
            {
                fprintf(stderr, "E: The session time value is not valid\n");
                return SESSION_TIME_ERROR;
            }
        }
        else if (strcmp(argv[i], "-b") == 0)
        {
            if (i + 1 < argc && is_int(argv[i + 1]) == 1)
            {
                timer_config->break_time = atoi(argv[i + 1]);
                i++;
            }
            else
            {
                fprintf(stderr, "E: The break time value is not valid\n");
                return BREAK_TIME_ERROR;
            }
        }
        else
        {
            fprintf(stderr, "E: Flag not valid\n");
            fprintf(stderr, "Usage: vex-timer -s <session> -t <session_time> -b <break-time>\n");
            return FLAGS_ERROR;
        }
    }
    return 1;
}
