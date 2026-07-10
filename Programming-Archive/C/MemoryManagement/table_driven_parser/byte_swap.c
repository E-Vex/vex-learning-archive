#include <stdio.h>
#include <stdint.h>

typedef struct __attribute__((packed))
{
    size_t offset;
    size_t size;
} field_descriptor_t;

void swap_bytes(void *data, size_t size)
{

    uint8_t *byte = (uint8_t *)data;

    uint8_t tmp;

    for (int i = 0; i < size / 2; i++)
    {
        tmp = byte[i];
        byte[i] = byte[size - i - 1]; /*we do '-1' because we start from 0*/
        byte[size - i - 1] = tmp;
    }
}

/*------------------------------------------------------------------------------------------------------------------------------------------------*/

void swap_fields(void *base, const field_descriptor_t *fields, size_t count)
{
    for (size_t i = 0; i < count; i++)
    {
        swap_bytes((uint8_t *)base + fields[i].offset, fields[i].size);
    }
}
