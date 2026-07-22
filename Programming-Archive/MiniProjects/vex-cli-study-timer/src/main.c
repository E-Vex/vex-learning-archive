#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int is_session = 0;
    int is_session_timer = 0;
    int is_break_timer = 0;

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-s") == 0)
        {
            is_session = 1;
        }
        else if (strcmp(argv[i], "-t") == 0)
        {
            is_session_timer = 1;
        }
        else if (strcmp(argv[i], "-s") == 0)
        {
            is_break_timer = 1;
        }
    }

    if (argc <= 1)
    {
        printf("E: The vex-timer command takes no arguments\n");
        printf("vex-timer -s <session> -t <session_time> -b <break-time>\n");
    }
    else if (argc > 7)
    {
        printf("E: The vex-timer command takes more than 7 arguments\n");
        printf("vex-timer -s <session> -t <session_time> -b <break-time>\n");
    }
    else if (argc < 7)
    {
        printf("E: The vex-timer command takes less than 7 arguments\n");
        printf("vex-timer -s <session> -t <session_time> -b <break-time>\n");
    }

    return 0;
}
