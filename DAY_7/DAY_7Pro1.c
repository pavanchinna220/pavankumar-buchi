1-Write a program to convert a data stream from Little Endian to Big Endian (you can take any 8 bit value or use 0b110101110)?

#include<stdlib.h>

int main(){
    int a=0x98;
    a=(a>>4&0x0f)|((a&0xf)<<4);
    printf("%x",a);
}
