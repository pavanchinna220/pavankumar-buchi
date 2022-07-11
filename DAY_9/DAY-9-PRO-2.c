 I)8-Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”

#include <stdio.h>
int main()
{
	int n=0x1a;
	int n1=0x23;
	n=n>>2;
	if(n==0x06)
	{
		n1|=((1<<7)|(1<<6)|(1<<3));
		printf("%x",n1);
	}
}

/**#include <stdio.h>
int main()

{
  int num1,num2,pos=3,pos1=6,pos2=7;
  printf("enter the values");
  scanf("%d%d",&num1,&num2);
  if((48 & num1) == 48)
  {
      num2=num2|(1<<pos)|(1<<pos1)|(1<<pos2);
      printf("%d",num2);
  }
  else
  printf(" not equal nothing");

}*/
