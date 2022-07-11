I). Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.

int main(){
    int n=0xfa;
    int pos=3;
    int pos1=4;
    int pos2=6;
    n=n&~(1<<pos)&~(1<<pos1)&~(1<<pos2);

    printf("%x",n);




II). Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55

#include <stdio.h>
int main()
{
int n=0x1c;
int n1=0x55;
	n&=~((1<<3)|(1<<4)|(1<<6));
	printf("%x",n1);
	printf("%x %x %x",(n1>>7)&1,(n1>>1)&1,(n1>>0)&1);

}
