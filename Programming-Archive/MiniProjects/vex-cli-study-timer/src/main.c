#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "timer/timer.h"

int is_int(char *str)
{
    if (*str == '+' && *(str + 1) != '\0')
        str++;

    while (*str != '\0')
    {
        if (!isdigit(*str) || *str == '\0')
            return 0;
        str++;
    }
    return 1;
}

int main(int argc, char *argv[])
{

    if (argc != 7)
    {
        fprintf(stderr, "E: The vex-timer command requires exactly 6 arguments.\n");
        fprintf(stderr, "Usage: vex-timer -s <session> -t <session_time> -b <break-time>\n");
        return 0;
    }

    timer_config_t timer_config = {0};

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-s") == 0)
        {
            if (i + 1 < argc && is_int(argv[i + 1]) == 1)
            {
                timer_config.session = atoi(argv[i + 1]);
                i++;
            }
            else
            {
                printf("E: The session value is not valid\n");
                return 0;
            }
        }
        else if (strcmp(argv[i], "-t") == 0)
        {
            if (i + 1 < argc && is_int(argv[i + 1]) == 1)
            {
                timer_config.session_time = atoi(argv[i + 1]);
                i++;
            }
            else
            {
                printf("E: The session time value is not valid\n");
                return 0;
            }
        }
        else if (strcmp(argv[i], "-b") == 0)
        {
            if (i + 1 < argc && is_int(argv[i + 1]) == 1)
            {
                timer_config.break_time = atoi(argv[i + 1]);
                i++;
            }
            else
            {
                printf("E: The break time value is not valid\n");
                return 0;
            }
        }
        else
        {
            printf("E: flag not valid\n");
            printf("NOTE: vex-timer -s <session> -t <session_time> -b <break-time>\n");
            return 0;
        }
    }

    return 0;
}
