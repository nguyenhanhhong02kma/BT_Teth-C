//Bai tap Tet_001//
/*1_ktra ma tran vuong
2_tong cac ptu duong cheo chinh
3_ktra so k xuat hien bn lan?
4_gtri trung binh cac ptu nho nhat tren moi cot
5_tim gtri& vi tri ptu chan max trong ma tran//
*/
#include<stdio.h>
void ham_1( int a[][10], int m, int n)
{
	if (m==n)
	{
		printf("TRUE_Ma tran vuong");
	}
	else
	{
		printf("FALSE_Khong phai ma tran vuong");
	}
	
	
}
void ham_2( int a[][10], int m, int n )
{
	int S=0;
	for(int i=0;i<n;i++)
    {
    	for( int j=0; j<m; j++)
    	{
    		if (i==j)
    		{
    		S+=a[i][j];
			
    	}
    	}
    }
    printf("Tong la %d", S);
}


int ham_3( int a[][10], int m, int n)
{
	int k,dem=0;
	printf("Nhap so k:"); scanf("%d", &k);
	for(int i=0;i<n;i++)
    {
    	for( int j=0; j<m; j++)
    	{
    		if (k==a[i][j])
    		{
    			dem++;
			}
		}
	}
	return dem;
	
}
void ham_4( int a[][10], int n, int m)
{ 
float S=0;
	int min;
    min=a[0][0];
    int j=0;
    while( j<m)                        //khi j< cot--> run//
	{
	    min=a[0][j];                   // gan min moi cho moi cot//
		for( int i=0; i<n; i++ )       //duyet tung gtri cua cot//
		{
			if( a[i][j]<min)
			{
				min=a[i][j];
		    }	
		}
		printf("\nmin cot thu %d la: %d",j+1, min);
		S+=min;                       //Tinh tong//
		j++;                          // tiep tuc +j de xet cot tiep theo//
		}
		printf("\nTrung binh cac ptu min la =%.2f",S/m);		
}
void ham_5(int a[][10], int n, int m)
{
	int h,k;
	int max;
	//chon so chan cuoi cung trong mang lam max de lay dkien//
    for(int i=0;i<n;i++)
    {
    	for( int j=0; j<m; j++)
    	{
    		if(a[i][j]%2==0)
    		{
			max=a[i][j];	 
			}
		}
	}
	//tim max//
		for(int i=0;i<n;i++)
    {
    	for( int j=0; j<m; j++)
    	{
    		if(a[i][j]%2==0)
    		{
    			if(a[i][j]>max)
    			{
    				max=a[i][j];
    				h=i;
    				k=j;
				}
		    }
        }
    }
printf("\nMax la:%d",max);
printf("\nMax o vi tri a[%d][%d]", h,k);
}
int main()
{
    int b;
	int a[10][10], m, n;
	printf("\nNhap so hang:"); scanf("%d", &n);
	printf("\nNhap so cot:"); scanf("%d", &m);
    for(int i=0;i<n;i++)
    {
    	for( int j=0; j<m; j++)
    	{
    	printf("\na[%d][%d]=", i,j); scanf( "%d", &a[i][j]);
    	
	}
}
for(int i=0;i<n;i++)
    {
    	for( int j=0; j<m; j++)
    	{
    		printf("%d\t", a[i][j]);
    	}
    	printf("\n");
    }
printf("Chon:"); scanf("%d", &b);
switch(b)
{
	case 1:
		{
			ham_1(a, m, n);
			break;
		}
	case 2:
		{
			ham_2(a, m,n);
			break;
		}
	case 3:
		{
			printf("\nSo lan xuat hien cua k la :%d",ham_3(a, m, n));
			break;
		}
	case 4:
		{
			ham_4(a,n,m);
			break;
		}
    case 5:
    	{
    		ham_5(a,n,m);
    		break;
		}
}
}

