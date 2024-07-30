#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool checkDuplicates(vector<int> a, int n, int *duplicate)
{
    if (a.empty())
        return false;
    unordered_set<int> intSet = {};
    for (int i = 0; i < n; ++i)
    {
        if (intSet.find(a[i]) == intSet.end())
        {
            // int not in the set, so add it to the set.
            intSet.insert(a[i]);
        }
        else
        {
            *duplicate = a[i];
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> a = {9, 2, 8, 1, 4, 9};
    int n = a.size();
    int duplicate = 0;

    cout << checkDuplicates(a, n, &duplicate) << " " << duplicate << endl;

    return (0);
}

// Overall, the time complexity of the checkDuplicates function is O(n),
// where n is the number of elements in the vector. This is because the function processes each element of the vector once,
// and operations involving the unordered_set (insertion and lookup) are average O(1).