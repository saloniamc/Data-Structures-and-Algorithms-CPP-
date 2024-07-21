// C++ program for Merge Sort
#include<iostream>
using namespace std;

//using namespace std;: This allows you to use 
//standard library objects and functions without the std:: prefix.


// Merges two subarrays of array[].

void merge(int originalArray[], int const start, int const mid, int const end)
{
    int const leftSubarrLen = mid - start + 1;
    int const rightSubarrLen = end - mid;

    // Now we need to create two TEMPORARY subarrays dynamically to store the two subarrays elements
    auto *leftArray = new int[leftSubarrLen], 
        *rightArray = new int[rightSubarrLen];

    // copy the elements from original array's 'start' index to 'mid' index into leftArray
    for(auto i = 0; i < leftSubarrLen; i++)
        leftArray[i] = originalArray[start + i];

    // copy the elements from original array's 'mid+1' index to 'end' index into rightArray
    for(auto j = 0; j < rightSubarrLen; j++)
        rightArray[j] = originalArray[mid + 1 + j];

    // Initialize initial indices of the ToBeSorted right and left subarrays and the originalArray, 
    // where the both subarray element are to be stored while sorting.
    auto leftArrayIndex = 0, rightArrayIndex = 0;
    int mergedArrayIndex = start;

    // MERGE : Store back elements of the both tEMPORARY subarrays as we sort elements of both.
    while(leftArrayIndex < leftSubarrLen && rightArrayIndex < rightSubarrLen)
    {
        if(leftArray[leftArrayIndex] <= rightArray[rightArrayIndex])
        {
            originalArray[mergedArrayIndex] = leftArray[leftArrayIndex];
            leftArrayIndex++;
        }
        else
        {
            originalArray[mergedArrayIndex] = rightArray[rightArrayIndex];
            rightArrayIndex++;
        }
        mergedArrayIndex++;
    }

    //copy remaining elements of left subarray if right subarray reaches end.
    while(leftArrayIndex < leftSubarrLen )
    {
            originalArray[mergedArrayIndex] = leftArray[leftArrayIndex];
            leftArrayIndex++;
            mergedArrayIndex++;
    }

    //copy remaining elements of right subarray if left subarray reaches end.
    while(rightArrayIndex < rightSubarrLen)
    {
        originalArray[mergedArrayIndex] = rightArray[rightArrayIndex];
        rightArrayIndex++;
        mergedArrayIndex++;
    }

    delete[] leftArray;
    delete[] rightArray;
}



// void merge(int array[], int const left, int const mid,
//            int const right)
// {
//     int const subArrayOne = mid - left + 1;
//     int const subArrayTwo = right - mid;

//     // Create temp arrays
//     auto *leftArray = new int[subArrayOne],
//          *rightArray = new int[subArrayTwo];

//     // Copy data to temp arrays leftArray[] and rightArray[]
//     for (auto i = 0; i < subArrayOne; i++)
//         leftArray[i] = array[left + i];
//     for (auto j = 0; j < subArrayTwo; j++)
//         rightArray[j] = array[mid + 1 + j];

//     auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
//     int indexOfMergedArray = left;

//     // Merge the temp arrays back into array[left..right]
//     while (indexOfSubArrayOne < subArrayOne
//            && indexOfSubArrayTwo < subArrayTwo) {
//         if (leftArray[indexOfSubArrayOne]
//             <= rightArray[indexOfSubArrayTwo]) {
//             array[indexOfMergedArray]
//                 = leftArray[indexOfSubArrayOne];
//             indexOfSubArrayOne++;
//         }
//         else {
//             array[indexOfMergedArray]
//                 = rightArray[indexOfSubArrayTwo];
//             indexOfSubArrayTwo++;
//         }
//         indexOfMergedArray++;
//     }

//     // Copy the remaining elements of
//     // left[], if there are any
//     while (indexOfSubArrayOne < subArrayOne) {
//         array[indexOfMergedArray]
//             = leftArray[indexOfSubArrayOne];
//         indexOfSubArrayOne++;
//         indexOfMergedArray++;
//     }

//     // Copy the remaining elements of
//     // right[], if there are any
//     while (indexOfSubArrayTwo < subArrayTwo) {
//         array[indexOfMergedArray]
//             = rightArray[indexOfSubArrayTwo];
//         indexOfSubArrayTwo++;
//         indexOfMergedArray++;
//     }
//     delete[] leftArray;
//     delete[] rightArray;
// }


void mergeSort(int a[], int start, int end)
{
    if(start >= end)
        return;
    
    int mid = start + (end-start)/2;
    mergeSort(a, start, mid);
    mergeSort(a, mid+1, end);
    merge(a, start, mid, end);
    
}

void printArray(int a[], int len)
{
    for(int i = 0 ; i < len; i++)
    {
        cout << a[i] << " " ;
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 12, 73, 24, 15, 36, 7, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, len);
    mergeSort(arr, 0, len-1);
    printArray(arr, len);
    
    return (0);
}