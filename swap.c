#include<stdio.h>
void main ()
{
int i=10,j=20;
i=i+(j=i);
printf("i=%d/n j=%d/n",i,j);
}
