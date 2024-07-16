// Linear Search using function 
#include <iostream>
#include <array>
using namespace std;

void LinearSearch(int a[],int k,  int size)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == k)
        {
            cout << "The key element is at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Key element not found" << endl;
    }
}

int main()
{
    int arr[8] = {10, 12, 73, 24, 15, 36, 7, 2};
    int key = 7;
    int size = sizeof(arr) / sizeof(arr[0]);
    LinearSearch(arr, key, size);

    return (0);
}