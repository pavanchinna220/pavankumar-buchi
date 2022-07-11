3-Write program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if bits CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in
 register “ADCON0”

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter number to chake is in ADCONO register");
    scanf("%d %d",&num1,&num2);
    if((28 & num1)==28)
    {
        num2=num2&0xf0;
        printf("number after clearing is required postions:%d",num2);
    }
    else
    {
        printf("CHS3,CHS2 CHS1 CHS0 bits are not equal to 0x7");
    }
}
