#include<stdio.h>
#define i 3
#define j 4

int main()
{
//�û����벢��ֵ��ά���� 
	printf("������%dλ���֣�",i*j);
	int a[i][j];
	int b[i][j];
	int n,a1=0,a2=0;
	for(int z=0;z<i*j;z++)
	{
		n=getchar();
		a[a1][a2]=n;
		a2++;
		if(a2==j)
		{
			a1++;
			a2=0;
		}
	}
	printf("a[%d][%d]:\n",i,j);
	
	
//��ӡa[a1][a2]
	for(int a1=0;a1<i;a1++)
	{
		for(int a2=0;a2<j;a2++)
		{
			printf("a[%d][%d]=%c",a1,a2,a[a1][a2]);
			if(a2!=(j-1))
			{
				printf(",");
			}
			else if(a2==(j-1))
			{
				printf("\n");
			}
		} 
	}
	
	
//ת��
	for(int a1=0;a1<i;a1++)
	{
		for(int a2=0;a2<j;a2++)
		{
			b[a2][a1]=a[a1][a2];
		}
	}
	
	
//��ӡa[a2][a1] 
	printf("\nb[%d][%d]:\n",j,i);
	for(int a1=0;a1<j;a1++)
	{
		for(int a2=0;a2<i;a2++)
		{
			printf("a[%d][%d]=%c",a1,a2,b[a1][a2]);
			if(a2!=(i-1))
			{
				printf(",");
			}
			else if(a2==(i-1))
			{
				printf("\n");
			}
		} 
	}
}
