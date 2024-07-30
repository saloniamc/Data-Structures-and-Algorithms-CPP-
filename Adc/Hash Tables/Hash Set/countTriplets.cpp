/*  Counting the number of triplets whose sum is equal to the value X;

Time Complexity :
    Hash Set Operations:
        O(n^2)because we iterate over the array and use hash set operations for each pair.

    Overall Complexity:
        O(n^2) where 𝑛 n is the number of elements in the array
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int countTriplets(const vector<int> &arr, int X)
{
    int n = arr.size();
    int count = 0;

    // Iterate through each element in the array as the first element of the triplet
    for (int i = 0; i < n - 2; ++i)
    {
        unordered_set<int> seen;

        // Fix the first element and find pairs with the remaining elements
        int current_sum = X - arr[i];
        for (int j = i + 1; j < n; ++j)
        {
            int complement = current_sum - arr[j];
            if (seen.find(complement) != seen.end())
            {
                ++count; // Found a triplet
            }
            seen.insert(arr[j]);
        }
    }

    return count;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int X = 10;

    cout << "Number of triplets: " << countTriplets(arr, X) << endl;

    return 0;
}