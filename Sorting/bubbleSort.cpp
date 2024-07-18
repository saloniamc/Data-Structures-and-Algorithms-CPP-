/*
    - First largest element will go to last place 
    - Inplace and stable algorigthm
    - requires (n - 1) passes required to complete whole array.
    - light-weight algorithm.
*/

#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int len)
{

    for(int i = 0 ; i < len; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {10, 12, 73, 24, 15, 36, 7, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);
    for(int i = 0 ; i < len; i++)
    {
        cout << arr[i] << " " ;
    }
    return (0);
}
