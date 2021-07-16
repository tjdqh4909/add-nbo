#include <stdio.h>
#include <stdint.h> 
#include <netinet/in.h>
#include "add-nbo.h"


int main(int argc, char **argv){ //0x03e8, 0x1f4
    FILE *fp1, *fp2;
    uint32_t binary1, binary2;

    fp1 = fopen(argv[1], "rb");
    fp2 = fopen(argv[2], "rb");
 

    fread(&binary1, 4, 1, fp1);
    fread(&binary2, 4, 1, fp2);

    binary1 = htonl(binary1);
    binary2 = htonl(binary2);

    print(binary1, binary2); 
     
    return 0;
}