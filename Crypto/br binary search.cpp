#include <iostream>
using namespace std;

int binary_search(int A[], int l, int r, int key)
{
	if(l == r)
	{
		if(key == A[l])
			return l;
		else
			return -1;
		
	}
	
	else{
		int m = (l+r)/2;
		if(key == A[m])
			return m;
		else if (key < A[m])
			return binary_search(A, l, m-1, key);
		else
			return binary_search(A, m+1, r, key);
	}
}

void insertion_sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
	int arr[100], i, n, key= 3;
	cout << "Enter no. of elements in array: ";
	cin >> n;
	cout << "Enter elements of array: ";
	for (i = 0; i < n; i++)
		cin >> arr[i];
	
	cout << "Enter number to search: ";
	cin >> key;
	insertion_sort(arr, n);
	int index = binary_search(arr, 0, n, key);
	cout << "\nSorted array: ";
	for (i = 0; i < n; i++)
		cout << arr[i] << "\t";
		
	cout << endl << endl << key << " found at " << index << endl;

	return 0;
	
}
