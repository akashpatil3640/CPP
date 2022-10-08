#include <iostream>
using namespace std; 

void swap(int* a, int* b) { 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition(int arr[], int start, int end) { 
	int pivot = arr[end];
	int i = (start - 1);

	for (int j = start; j <= end - 1; j++) { 
		if (arr[j] < pivot) { 
			i++;
			swap(&arr[i], &arr[j]); 
		} 
	} 

	swap(&arr[i + 1], &arr[end]); 
	return (i + 1); 
} 


void quickSort(int arr[], int start, int end) {
	if (start < end) {
		int pi = partition(arr, start, end); 

		quickSort(arr, start, pi - 1); 
		quickSort(arr, pi + 1, end); 
	} 
}


int main() {

    int arr[] = {11,22,34,54,12,98,10,14,21,30,34,11};
    int n = sizeof(arr)/sizeof(arr[0]); 

    cout << "The Unsorted Array is: ";
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    /* the function quicksort() is taking three atrributes:
    1. The address of the array
    2. The starting index
    3. The ending index */
    quickSort(arr, 0, n - 1);

    cout << "The Sorted Array is: ";
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

	return 0; 
} 
