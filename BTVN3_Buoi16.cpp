/*3. Cho 2 bien sau: a là tu so, b là mau so . Thiet lap menu cùng oi các hàm con tuong ung de thuc hien các chuc nang sau :
1. Hien thi phân so  dang a/b
2. Kiem tra xem phân so dã rút gon chua. Neu chua hãy tim hành rút gon phân so
3. In ra màn hình dang so thap phân cua phân so dó
4. Ket thúc*/
#include<stdio.h>
void ham_2(int a, int b)
{
	int min,m;
	if(a<b)
	{
		min=a;
	}
	else
	{
	    min=b;
	}
	for(int i=1; i<=min; i++)
	{
		if(a%i==0 && b%i==0)
		{
			m=i;
		}
	}
	printf("\n%d/%d", a/m, b/m);
}
int main()
{
	float a,b;
	int c;
	printf("\nNhap tu so a:"); scanf("%d",&a);
	printf("\nNhap mau so b:"); scanf("%d",&b);
	printf("\nChon:");scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
				printf("%d/%d", a,b);
				break;
			}
		case 2:
			{
				ham_2(a,b);
				break;
			}
		case 3:
			{
				printf("\ndang thap phan la %.2f", a/b);
				break;
			}
	}
}

