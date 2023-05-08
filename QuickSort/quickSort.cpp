#include <iostream>
using namespace std;

class QS{
   	int *arr, n;
    public:
    QS()
    {
        cout<<"Enter size of an Array  ";
        cin>>n;
        arr = new int[n];
    }
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
    void qssort()
    {
        quickSort(arr, 0, n-1);
    }
    void quickSort(int arr[], int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
    void insertArray()
    {
        int i;
        for( i = 0; i < n ; i++)
        {
            cin>>arr[i];
        }
    }
    void printArray() {
        int i;
        for (i = 0; i <n; i++)
            cout<<arr[i];
        cout<<"\n";
    }
};
int main() {
    QS obj;
    obj.insertArray();
	obj.qssort();
    cout<<"Sorted array: \n";
	obj.printArray();
	return 0;
}
