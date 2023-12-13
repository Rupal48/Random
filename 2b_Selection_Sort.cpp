// SELECTION SORT(arr, n)  
  
// Step 1: Repeat Steps 2 and 3 for i = 0 to n-1  
// Step 2: CALL SMALLEST(arr, i, n, pos)  
// Step 3: SWAP arr[i] with arr[pos]  
// [END OF LOOP]  
// Step 4: EXIT  

#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = arr[i];

        arr[i] = arr[minIndex];

        arr[minIndex] = temp;
    }
}
int main()
{
    int n = 5;
    int arr[n] = {4, 2, 6, 38, 1};

    selectionSort(arr, n);

    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}