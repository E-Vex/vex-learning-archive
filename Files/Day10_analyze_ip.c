/** This code defines a simple structure for an IP header and a TCP header, and a Packet structure that contains both.
 The analyze_ip function takes an IP_header pointer and prints the source and destination IP addresses in a human-readable format. The main function creates a Packet instance,
 sets the source and destination IP addresses, and calls the analyze_ip function to display them.*/

// Note: The IP addresses are represented in hexadecimal format, where 0xC0A80001 corresponds to 192.168.0.1 and 0xC0A80002 corresponds to 192.168.0.2.
#include <stdio.h>

typedef struct // Define a structure for the IP header
{
    unsigned int src_ip;
    unsigned int dst_ip;
} IP_header;

typedef struct // Define a structure for the TCP header
{
    unsigned short src_port;
    unsigned short dst_port;
} TCP_header;

typedef struct Packet // Define a structure for the Packet that contains data, an IP header, and a TCP header
{
    char data[1024];
    IP_header ip;
    TCP_header tcp;

} Packet;

void analyze_ip(IP_header *ip) // Function to analyze and print the source and destination IP addresses
{
    printf("Source IP: ");
    int i = 24;
    while (i >= 0) // Loop to extract and print each byte of the source IP address
    {
        printf("%u", (ip->src_ip >> i) & 0xFF); // Shift the IP address to the right by i bits and mask with 0xFF to get the current byte
        if (i > 0)
            printf(".");
        i -= 8;
    }
    printf("\nDestination IP: ");
    i = 24;
    while (i >= 0) // Loop to extract and print each byte of the destination IP address
    {
        printf("%u", (ip->dst_ip >> i) & 0xFF); // Shift the IP address to the right by i bits and mask with 0xFF to get the current byte
        printf(i > 0 ? "." : "");
        i -= 8;
    }
    printf("\n");
}

int main()
{

    Packet pkt;                 // Create an instance of the Packet structure
    pkt.ip.src_ip = 0xC0A80001; // Set the source IP address
    pkt.ip.dst_ip = 0xC0A80002; // Set the destination IP address

    analyze_ip(&(pkt.ip)); // Call the analyze_ip function to display the source and destination IP addresses

    return 0;
}
// Output:
// Source IP: 192.168.0.1
// Destination IP: 192.168.0.2

//  This code demonstrates how to parse IP addresses using bitwise operations and print them in a human-readable format.
// The analyze_ip function takes an IP_header structure as input and extracts the source and destination IP addresses, printing them in the standard dotted-decimal notation.
//  It uses bitwise operations to shift and mask the IP address to get each byte, which is then printed in a human-readable format.
//   The main function demonstrates how to set the IP addresses and call the analyze_ip function to display them.