//Bai_02: viet ctrinh tach mang 1 chieu thanh mang a co cac ptu duong& b chua cac ptu con lai//
#include<stdio.h>
void in(float a[20], int i)
{
	for( int m=0;m<i;m++)
	{
		printf("%.2f\t", a[m]);
	}
}
int main()
{
	int n;
	int k=0, t=0;
	float  h[20],a[20],b[20];
	printf("\nNhap so ptu cua h:");scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	printf("\nh[%d]=",i); scanf("%f",&h[i]);
    }
    for(int i=0;i<n;i++)
    {
    	if(h[i]>0)
    	{
    	a[k]=h[i];
    	k++;
	    }
	    else
	    {
	    b[t]=h[i];
	    t++;
		}
    }
    printf("\nmang a:");
	in(a,k);
	printf("\nmang b:");
	in(b,t);
}
