// Heap Sort Algorithm
// First convert the array into heap data structure using heapify, then one by one delete the
// root node of the Max-heap and replace it with the last node in the heap and then heapify
// the root of the heap. Repeat this process until size of heap is greater than 1.

// Build a heap from the given input array.
// Repeat the following steps until the heap contains only one element:
// Swap the root element of the heap (which is the largest element) with the last element of the heap.
// Remove the last element of the heap (which is now in the correct position).
// Heapify the remaining elements of the heap.
// The sorted array is obtained by reversing the order of the elements in the input array.

#include <iostream>
using namespace std;
void heapify(int arr[], int n, int i)
{

    int largest = i;

    int left = 2 * i + 1;

    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right<n & arr[right]> arr[largest])
        largest = right;

    if (largest != i)
    {

        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{

    for (int i = n/2 - 1; i >= 0; i--) heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--)
    {

        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}
int main()
{
    int n = 5;
    int arr[n] = {4, 2, 6, 38, 1};

    heapSort(arr, n);

    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}