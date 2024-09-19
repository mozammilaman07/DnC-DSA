#include <iostream>
using namespace std;

void mergeSort(int arr[], int size)
{
}

int main()
{
    int arr[] = {4, 45, 84, 2, 56, 49, 21, 6, 52, 43};
    int size = 10;
    mergeSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
