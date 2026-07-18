#include <stdio.h>
#include <stdint.h>

int is_little_endian(void)
{
    uint32_t value = 0x01020304;
    unsigned char *ptr = (unsigned char *)&value;

    return (*ptr == 0x04);
}

int main(void)
{
    if (is_little_endian())
        printf("Little Endian\n");
    else
        printf("Big Endian\n");

    return 0;
}
