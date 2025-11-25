//to find the largest element from an array using functions.
#include <stdio.h>
int findLargest(int arr[],int n) 
{
    int max=arr[0];
    for (int i=1;i<n;i++)
	 {
        if (arr[i]>max) 
		{
            max=arr[i];
        }
    }
    return max;
}

int main() 
{
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i=0;i<n;i++)
	 {
        scanf("%d",&arr[i]);
    }
    int largest = findLargest(arr,n);
    printf("The largest element is: %d\n",largest);
    return 0;
}
