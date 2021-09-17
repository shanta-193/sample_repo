
#include <stdio.h>
#include<stdlib.h>
int main()
{

int arr[100], n;
int temp =0;

printf("Enter the no. of elements(n): ");
scanf("%d/n", &n);
printf("Enter the elements of the array: ");
for(int i=0; i < n; i++)
{
scanf("%d", &arr[i]);
}
printf("Array elements before sorting are: ");
// elements before sorting
for (int i=0; i < n; i++)
{
printf("%d ",arr[i]);
}


//sorting
for(int i =0; i < n; i++)
for(int j = i+1; j < n; j++)
{
if(arr[i] > arr[j])
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;

}
}
printf("\nArray elements after sorting are: ");
// elements after sorting
for (int i=0; i<n; i++)
{
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
