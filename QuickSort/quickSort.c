#include <stdio.h>

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int st = low; 
    int end = high; 
    int k = high;
    for (int i = high; i > low; i--) {
        if (arr[i] > pivot)
            swap(&arr[i], &arr[k--]);
    }
    swap(&arr[low], &arr[k]);
    return k;
}
void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
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
void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main() {
	int arr[100], n;
    printf("Enter size of an Array  ");
    scanf("%d", &n);
    insertArray(arr, n);

	quickSort(arr, 0, n - 1);
	
    printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
