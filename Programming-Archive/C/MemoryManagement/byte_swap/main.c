#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include "virtual_struct.h"
#include "byte_swap.h"

int main()
{

    virtual_struct_t virtual_struct;
    field_descriptor_t fields;

    fields.offset = offsetof(virtual_struct_t, v1);
    fields.size = sizeof(virtual_struct.v1);

    FILE *fp = fopen("raw_bytes.bin", "rb");
    fread(&virtual_struct, sizeof(virtual_struct_t), 1, fp);

    swap_fields(&virtual_struct, &fields, fields.offset);

    printf("virtual_struct : 0%lX\n", virtual_struct.v1);

    return 0;
}