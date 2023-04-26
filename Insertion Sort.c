#include<stdio.h>
void Bubblesort(int [],int);

void InsertionSort(int [],int);
int main()
{
	int arr[6]={32,5,7,56,78,91};
    printf("the sorted list is:\n");

	InsertionSort(arr , 6);
    return 0 ;
}
	
	void InsertionSort(int arr[],int n)
	{
		int i,j,small,k;
		for(i=1;i<n;i++)
		{
			small=arr[i];
			for(j=i-1;j>=0 && small<arr[j-1];j--)
			{
				arr[j]=arr[j-1];
			}
			arr[j]=small;
		}
	
	for (k=0;k<n;k++)
	{
		printf("%d ",arr[k]);
	}
}

	
	



