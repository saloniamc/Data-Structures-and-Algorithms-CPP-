/*
    BINARY SEARCH - (RECURSIVE ) : uses Recursive Function in the process of comparing, splitting 
                                    and searching the key

    Conditions to apply Binary Search algorithm :
        1. The array must be sorted.
        2. The array must contain unique elements.
        3. Access to any element of the data structure should take constant time.

    Time Complexity : Best Case: O(1)
                      Average Case: O(log N)
                      Worst Case: O(log N)
    Space Complexity : O(1)
                       O(log n)  ** IF recursive call stack considered.**
        
*/

#include<iostream>
using namespace std;

int binarySearch(int a[], int key, int start, int end)
{
    if(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(a[mid] == key)
        {
            return mid;
        }
        else if (key < a[mid])
        {
            return binarySearch(a, key, start, mid - 1);
        }
        else 
        {
            return binarySearch(a, key, mid + 1, end);
        }       
    }
    return (-1);
}

int main()
{
    int arr[9] = {2, 5, 7, 12, 19, 27, 32, 56, 81};
    int key = 2;
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = size - 1;
    
    int ans = binarySearch(arr, key, start, end);

    (ans == -1) ? cout << "The key element is not present in the array"
    : cout << "The key element is present at index " << ans  ;

    
    return (0);
}