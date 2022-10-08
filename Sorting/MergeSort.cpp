#include <iostream>
using namespace std; 

void merge(int arr[], int left, int mid, int right) {

    int n1 = mid - left + 1;
    int n2 = right - mid;
 
    int L[n1], R[n2]; // Dividing our array into two parts
    
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left+ i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int *arr,int left,int right) {
    
    if(left >= right)
        return;
    
    int mid =left+ (right-left)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
}

int main() {

    int arr[] = {11,22,34,54,12,98,10,14,21,30,34,11};
    int n = sizeof(arr)/sizeof(arr[0]); 

    cout << "The Unsorted Array is: ";
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    /* the function mergesort() is taking three atrributes:
    1. The address of the array
    2. The starting index
    3. The ending index */
    mergeSort(arr, 0, n - 1);

    cout << "The Sorted Array is: ";
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

	return 0; 
}
