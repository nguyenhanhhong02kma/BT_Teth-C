//5. : Nhap so nguy�n n l� canh ke cua tam gi�c vu�ng c�n. In ra h�nh tam gi�c dac, rong voi c�c dau * 
#include<stdio.h>
void tg_dac( int n)
{
		for(int j=n; j>0; j--)
		{
			for(int i=j;i>0;i--)
		{
			printf(" * ");
		}
		printf("\n");
	    }
	    printf("\n\n");
	    for(int i=1;i<=n;i++)
	    {
	    	for(int j=1;j<=i;j++)
	    	{
	    		printf(" * ");
			}
			printf("\n");
		}	
	}
int main()
{
	int n;
	printf("\nNhap canh ke:"); scanf("%d", &n);
	tg_dac(n);	
}
