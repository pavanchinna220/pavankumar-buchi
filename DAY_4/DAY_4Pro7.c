1-BIGGEST OF TWO NUMBERS USING CONDITIONAL OPERATOR

#include <stdio.h>
int main()
{
int a,b;
printf("enter the value a,b");
scanf("%d %d",&a,&b);
a>b?printf("%d",a):printf("%d",b);
}


output-
enter the value a,b
12 34
34
