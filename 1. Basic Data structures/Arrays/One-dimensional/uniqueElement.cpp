/*  To find the unique element in an array where every element appears exactly twice except for one
    element, you can use the XOR operation for an efficient solution. 
    XOR is particularly useful for this problem because:

    1. XOR of a number with itself is 0: a ^ a = 0
    2. XOR of a number with 0 is the number itself: a ^ 0 = a
    3. XOR is commutative and associative, meaning the order of operations does not affect the result.
*/

#include<iostream>
#include <vector>
using namespace std;


int uniqueElement(vector<int> a)
{
    int ans = 0;
    for(int num : a)
    {
        ans ^= num;
    }
    return ans;
}

int main()
{
    vector<int> a = {9, 2, 8, 1, 8, 9, 2};

    cout << uniqueElement(a) << endl;
    
    return (0);
}