// padding is the extra bytes added by the compiler to align the data in memory for better performance. In this case, the compiler may add padding bytes between the members of the 'header' structure to ensure that each member is aligned on a memory boundary that is optimal for the architecture. This can result in the size of the structure being larger than the sum of the sizes of its individual members.

#include <stdio.h>

struct header
{
    __uint32_t destIP;
    __uint32_t srcIP;
    __uint8_t type;
    __uint32_t size;
};

//[192][168][1][1][srcIP 4 bytes][type 1 byte][size 4 bytes] => 4 + 4 + 1 + 4 = 13 bytes
int main()
{
    printf("Size of header struct: %zu bytes\n", sizeof(struct header)); // This will print the size of the 'header' structure in bytes. The expected output should be 13 bytes, but due to padding for alignment, it might be larger (e.g., 16 bytes) depending on the compiler and architecture.
    return 0;
}