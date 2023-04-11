#include <iostream>
using namespace std;
class Sort{
    int arr[100], n;
    public:
    Sort()  // constructor
    {
    	cout<<"Enter no of elements ";
        cin>>n;
    }
    void insertionSort()
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
    void insertArray()
    {
        int i;
        for( i = 0; i < n ; i++)
        {
            cin>>arr[i];
        }
    }
    void printArray()
    {
        int i;
        for (i = 0; i < n; i++)
            cout<<arr[i];
        cout<<"\n";
    }
};
int main()
{
    Sort obj;
    obj.insertArray() ;
	obj.insertionSort();
	obj.printArray();

	return 0;
}
