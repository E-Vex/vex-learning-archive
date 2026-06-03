#include <stdio.h>

typedef struct
{
    unsigned int src_ip;
    unsigned int dst_ip;
} IP_header;

typedef struct
{
    unsigned short src_port;
    unsigned short dst_port;
} TCP_header;

typedef struct Packet
{
    char data[1024];
    IP_header ip;
    TCP_header tcp;

} Packet;

int main()
{

    Packet pkt;

    return 0;
}
