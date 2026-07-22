#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "timer/timer.h"
#include "cli/cli.h"

int main(int argc, char *argv[])
{
    timer_config_t timer_config = {0};

    input_handler(argc, argv, &timer_config);

    return 0;
}
