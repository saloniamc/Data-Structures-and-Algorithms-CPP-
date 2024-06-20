#include <iostream>
using namespace std;

// int productOfArray(int a[], int n)
// {
//     int product = 1;
//     for (int i = 0; i < n; ++i)
//     {
//         product = product * a[i];
//     }
//     return product;
// }

int main()
{
    int b[5] = {1, 2, 3, 4, 5};
    int product1 = 1;
    for (int i = 0; i < 5; i++)
    {
        product1 = product1 * b[i];
    }
    cout << product1;

    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; ++i)
    // {
    //     cin >> a[i];
    // }

    // cout << "Product of array is " << productOfArray(a, n) << endl;

    return (0);
}