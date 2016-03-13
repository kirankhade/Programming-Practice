#include<stdio.h>

int main()
{
	int i,j,k;
	printf("Enter two no:-");
	scanf("%d%d",&i,&j);
	printf("%d",gcd(i,j));
	return 0;
}

int gcd(int i,int j)
{
	int k;
	if(i<j)
	{
		k=i;
		i=j;
		j=k;
	}
	if(j==0)
		return i;
	else
	{
		k=i%j;
		i=j;
		j=k;
		gcd(i,j);
	}
	
} 
		
		

		
