/*  SELECTION-SORT
        - Smallest element will come to first place.
        - Not stable sorting algorithm.
        - Inplace sorting algorithm.
        - Greatness : Less swaps (n-1)  in Every case.

    Time Complexity : Comparisons + Swaps 

    a) Total comparisons = (n-1) + (n-2) + ... + 1  =  n^2 comparisons   ==  O(n^2)
    b) Total Swaps       = (n-1) swaps              =  n swaps           ==  O(n)    -- EVERY CASE

    Hence, Time Complexity = O(n^2)    ---Every Case
*/

#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int len)
{
    
    for(int i = 0; i < len-1; i++)
    {
        int min_index = i;
        for(int j = i+1; j < len; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(&arr[i], &arr[min_index]);
    }
}

int main()
{
    int arr[] = {10, 12, 73, 24, 15, 36, 7, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, len);
    for(int i = 0 ; i < len; i++)
    {
        cout << arr[i] << " " ;
    }

    return (0);
}