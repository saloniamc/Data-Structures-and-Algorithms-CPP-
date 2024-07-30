/*  BUBBLE-SORT :
        - First largest element will go to last place 
        - Inplace and stable algorigthm
        - requires (n - 1) passes required to complete whole array.
        - light-weight algorithm.

    Time Complexity : Comparisons + Swaps 

    a) Total comparisons = (n-1) + (n-2) + ... + 1  =  n^2 comparisons   ==  O(n^2)
    b) Total Swaps       = (n-1) + (n-2) + ... + 1  =  n^2  swaps        ==  O(n^2)  --Worst Case
                         = (n-1) swaps              =  n swaps           ==  O(n)    --Best Case

    Hence, Time Complexity = O(n^2)    ---Every Case
                    
*/

#include <iostream>
using namespace std;

// void swap(int* a, int* b)
// {
//     int temp = 0;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

void bubbleSort(int arr[], int len)
{

    for(int i = 0 ; i < len - 1; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                // swap(&arr[j], &arr[j + 1]);
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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
