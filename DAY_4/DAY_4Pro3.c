1)HOW TO SET A BIT

#include <stdio.h>int main()
{
int n=0x12,pos=3,a;
a=n|(1<<pos);
printf("%d",a);
}
