// Reference-based swaps
//Simplicity: Easier to use and less error-prone for basic types.
//Automatic Validity: The function guarantees valid references, as they must refer to existing objects.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void swapInts(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;	
}

void swapStrings(vector<string>& str, int i, int j)
{
	string temp = str[i];
        str[i] = str[j];
        str[j] = temp;
}

int main()
{
	vector<int> arr = {1, 2, 3};
	vector<string> str = {"Happy", "Felices", "Emocionante"};
	
	// SWAP INTEGERS IN VACTOR
	std::cout << "Before swap: ";
   	 for (const auto i : arr) {
      	 	std::cout <<i << " ";
   	 }
	cout << endl;
	swapInts(arr[0], arr[2]);

	std::cout << "After swap: ";
   	 for (const auto i : arr) {
      	 	std::cout << i << " ";
   	 }
	cout << endl;
	
	// SWAP STRINGS IN VECTOR
	std::cout << "Before swap: ";
   	 for (const auto& str : str) {
      	 	std::cout <<str << " ";
   	 }

	swapStrings(str, 0, 2);
	cout << endl;
	 std::cout << "After swap: ";
   	 for (const auto& str : str) {
      	 	std::cout << str << " ";
   	 }

	return (0);
}