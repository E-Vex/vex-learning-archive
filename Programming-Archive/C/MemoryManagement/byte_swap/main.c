#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include "virtual_struct.h"
#include "byte_swap.h"

int main()
{

    virtual_struct_t virtual_struct;
    field_descriptor_t fields;

    FILE *fp = fopen("raw_bytes.bin", "rb");

    int i = 0;

    while (fread(&virtual_struct, sizeof(virtual_struct_t), 1, fp) == 1)
    {
        fields.offset = offsetof(virtual_struct_t, v1);
        fields.size = sizeof(virtual_struct.v1);

        swap_fields(&virtual_struct, &fields, 1);

        printf("virtual_struct %d (8 Bytes) : 0x%lX\n", i, virtual_struct.v1);
        i++;
    }

    return 0;
}