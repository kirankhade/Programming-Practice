#include<iostream>
#include<stdlib.h>

using namespace std;
int a[10]={0,2,5,1,10,12,13,20,56,89};
int partition(int start,int end)
{
	int i,j,pivot;
	pivot=i=start;
	j=end;
	if(i<j)
	{
		while(i<j)
		{
			while(a[i]<=a[pivot])
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j)
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		int temp=a[i];
		a[i]=a[pivot];
		a[pivot]=temp;
		
	}
	
	return i;
}

void Quicksort(int low,int high)
{
	if(low<high)
	{
		int pivot=partition(low,high);
		Quicksort(low,pivot-1);
		Quicksort(pivot+1,high);		
	}
	
}





int main()
{
	//int a[10]={0,2,5,1,10,12,13,20,56,89};
		Quicksort(0,9);
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
