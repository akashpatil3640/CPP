#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int counter = n-1; counter >= 0; counter--)
    {
        for (int i = 0; i <= counter-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1]= temp;
            }
            
        }
        
    }
    
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}