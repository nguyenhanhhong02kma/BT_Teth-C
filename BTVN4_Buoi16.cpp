//BTVN04_Buoi16: lke uoc cua 2 so nguyen duong//
#include<stdio.h>
void uoc(int a, int b)
{
	int last;
	int i=1;
	int min;
	if(a<b)
	{
		min=a;
	}
	else
	{
	    min=b;
	}
	printf("\ncac uoc la:");
	while(i<min)
	{
		if(a%i==0&&b%i==0)
		{
		printf("%d\t",i);
	    }
	    i++;
	}
}
int main()
{
	int a,b,min;
	printf("\nNhap a:"); scanf("%d", &a);
	printf("\nNhap b:"); scanf("%d", &b);
	uoc(a,b);
}
