#include <stdio.h>
#include <stdlib.h>

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

void analyze_ip(IP_header *ip)
{
    printf("Source IP: ");
    int i = 24;
    while (i >= 0)
    {
        printf("%u", (ip->src_ip >> i) & 0xFF);
        if (i > 0)
            printf(".");
        i -= 8;
    }
    printf("\nDestination IP: ");
    i = 24;
    while (i >= 0)
    {
        printf("%u", (ip->dst_ip >> i) & 0xFF);
        printf(i > 0 ? "." : "");
        i -= 8;
    }
    printf("\n");
}

Packet *create_packet(int n)
{
    Packet *pkt = malloc(n * (sizeof(Packet)));
    return pkt;
}

int main()
{

    Packet *pkt = create_packet(3);
    (pkt + 0)->ip.src_ip = 0xC0A80001;
    (pkt + 0)->ip.dst_ip = 0xC0A80002;
    (pkt + 1)->ip.src_ip = 0xC0A80003;
    (pkt + 1)->ip.dst_ip = 0xC0A80004;
    (pkt + 2)->ip.src_ip = 0xC0A80005;
    (pkt + 2)->ip.dst_ip = 0xC0A80006;

    for (int i = 0; i < 3; i++)
    {
        analyze_ip(&(pkt + i)->ip);
    }

    free(pkt);
    return 0;
}
