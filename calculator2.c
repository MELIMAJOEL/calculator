#include <stdio.h>
   int sum(int a,int b);
   int sub(int a,int b);
   int mult(int a,int b);
   float div(int a,int b);
int main()
{
	int a,b,c,d,e,f;
	printf("\n enter the value of a:");
	scanf("%d",&a);
	printf("\n enter the value of b:");
	scanf("%d",&b);
	c=sum(a,b);
	d=sub(a,b);
	e=mult(a,b);
	f=div(a,b);
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	printf("\n Addition is:%d",z);
	return 0;
 }
int sub(int x,int y)
{ 
    int z;
    z=x-y;
    printf("\n Substraction is:%d",z);
    return 0;
 }
int mult(int x,int y)  
{
	
    int z;
    z=x*y;
    printf("\n Multiplication is:%d",z);
    return 0;
 }
 float div(int x,int y)
{ 
    float z;
    z=x/(float)y;
    printf("\n Division is:%f",z);
	return 0;
}
