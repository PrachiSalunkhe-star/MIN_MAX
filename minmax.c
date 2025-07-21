#include<stdio.h>

int minimum(int arr[],int size);

int maximum(int arr[],int size);


int main(void)
{	
	int arr[5];
	int size;
	printf("Enter array size:");
	scanf("%d",&size);
	printf("Enter array elements:");
	for(int i=0; i<size;i++)
	{
		scanf("%d \n ",arr[i]);
	}
	printf("Minimum element in array:");
	minimum( arr,size);
	printf("Maximum element in array:");
	minimum( arr,size);
	return 0;
}

int minimum(int arr[],int size)
{	int min =arr[0];
	for(int i=0;i<arr;i++)
	{
		if(arr[i]<min)
		 min=arr[i];

        }

	 
	return min;
	 
}
			
int maximum(int arr[],int size)
{	int max =arr[0];

	for(int i=0;i<arr;i++)
	{
		if(arr[i]>max)
		 max=arr[i];
	
        }
	 
	return max;
	 
}