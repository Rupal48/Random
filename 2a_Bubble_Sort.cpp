// In Bubble Sort algorithm, 

// traverse from left and compare adjacent elements and the higher one is placed at right side. 
// In this way, the largest element is moved to the rightmost end at first. 
// This process is then continued to find the second largest and place it and so on until the data is sorted.

#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];

                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n = 5;
    int arr[n] = {4,2,6,38,1};
    
    bubbleSort(arr,n);

    cout << "Sorted Array : "; 
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

}