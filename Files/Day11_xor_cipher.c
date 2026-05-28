#include <stdio.h>

int main()
{

    char data = 'A'; // Example character to encrypt
    char key = 0x5A; // Example key for XOR cipher

    int encrypted = data ^ key; // Encrypt the data using XOR
    printf("Encrypted byte: (Hex): 0x%02X\n", encrypted);
    encrypted = encrypted ^ key; // Decrypt the data using XOR
    printf("Decrypted byte: %c\n", encrypted);
    return 0;
}

/*
In this code, we have a character 'A' that we want to encrypt using an XOR
cipher. We use a key (0x5A) to perform the XOR operation, which gives us the encrypted byte. To decrypt it,
 we simply XOR the encrypted byte with the same key again, which returns us to the original character 'A'.
 The output will show the encrypted byte in hexadecimal format and the decrypted character.
*/

// output:
/*
Encrypted byte: (Hex): 0x1B
Decrypted byte: A
*/