#include <iostream>
using namespace std;

int secondLargest(int a[], int n)
{
    int max1 = INT_MIN, max2 = INT_MIN;
    for(int i = 0; i < n; ++i)
    {
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }else if(max1 > a[i])
        {
            if(a[i] > max2)
            {
                max2 = a[i];
            }
        }

    }

    return max2;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cout << "Second Largest element of the array is " << secondLargest(a, n) << endl;
    return (0);
}
