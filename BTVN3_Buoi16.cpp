/*3. Cho 2 bien sau: a l� tu so, b l� mau so . Thiet lap menu c�ng oi c�c h�m con tuong ung de thuc hien c�c chuc nang sau :
1. Hien thi ph�n so  dang a/b
2. Kiem tra xem ph�n so d� r�t gon chua. Neu chua h�y tim h�nh r�t gon ph�n so
3. In ra m�n h�nh dang so thap ph�n cua ph�n so d�
4. Ket th�c*/
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

