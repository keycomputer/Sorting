import java.util.Scanner;

public class insertionSort {
	private int arr[];
    private int n;
    Scanner s ;
    public  insertionSort()
    {
        System.out.println("Enter no of elements ");
        s = new Scanner(System.in);
        n = s.nextInt();
        arr = new int[n];
    }
    public void sort()
	{
		for (int i = 1; i < n; ++i) {
			int key = arr[i];
			int j = i - 1;
			while (j >= 0 && arr[j] > key) {
				arr[j + 1] = arr[j];
				j = j - 1;
			}
			arr[j + 1] = key;
		}
	}
    public void inputArray()
    {
        //Scanner s = new Scanner(System.in);
        for(int i =0; i <  n ; i++)
        {
            System.out.println("enter elements ");
            arr[i]  = s.nextInt();
        }
        s.close();
    }
    public void printArray()
	{
		for (int i = 0; i < n; ++i)
			System.out.print(arr[i] + " ");
		System.out.println();
	}
	public static void main(String args[])
	{
		insertionSort ob = new insertionSort();
		ob.inputArray();
        ob.sort();
		ob.printArray();
	}
};
