#include <iostream>
#include <vector>
using namespace std;

int Smallest(vector<int> b, int n){
    int smallest = INT_MAX;

    for(int i = 0 ; i < n; ++i)
    {
        if(b[i] < smallest)
        {
            smallest = b[i];
        }
    }
    return smallest;
}

int main()
{
    vector<int> b = {1, 2, 3, 4, 5};
    int n = b.size();

    cout << "Smallest element of the array is " << Smallest(b, n) << endl;
    return (0);
}