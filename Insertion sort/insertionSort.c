#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) 
    {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) 
        {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
void insertArray(int arr[], int n)
{
    int i;
    for( i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	int arr[100], n;
    printf("Enter no of elements ");
    scanf("%d", &n);
    insertArray(arr, n) ;
	insertionSort(arr, n);
	printArray(arr, n);

	return 0;
}
