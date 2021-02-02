//5. : Nhap so nguyên n là canh ke cua tam giác vuông cân. In ra hình tam giác dac, rong voi các dau * 
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
