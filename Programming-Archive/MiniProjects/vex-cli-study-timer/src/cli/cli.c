#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "../timer/timer.h"

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

int input_handler(int argc, char *argv[], timer_config_t *timer_config)
{

    if (argc != 7)
    {
        fprintf(stderr, "E: The vex-timer command requires exactly 6 arguments.\n");
        fprintf(stderr, "Usage: vex-timer -s <session> -t <session_time> -b <break-time>\n");
        exit(EXIT_FAILURE);
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
                printf("E: The session value is not valid\n");
                exit(EXIT_FAILURE);
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
                printf("E: The session time value is not valid\n");
                exit(EXIT_FAILURE);
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
                printf("E: The break time value is not valid\n");
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            printf("E: flag not valid\n");
            printf("NOTE: vex-timer -s <session> -t <session_time> -b <break-time>\n");
            exit(EXIT_FAILURE);
        }
    }
    return 1;
}
