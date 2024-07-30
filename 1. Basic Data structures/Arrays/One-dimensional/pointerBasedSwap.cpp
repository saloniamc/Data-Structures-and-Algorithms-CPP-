//pointer based swaps
//Flexibility: Can be used with dynamic memory and arrays.
//Potential Issues: Requires careful management of pointer validity (e.g., checking for null pointers).

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void swapInts(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;	
}

void swapStrings(string* a, string* b)
{
	string temp = *a;
	*a = *b;
	*b = temp;
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
	swapInts(&arr[0], &arr[2]);

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

	swapStrings(&str[0], &str[2]);
	cout << endl;
	 std::cout << "After swap: ";
   	 for (const auto& str : str) {
      	 	std::cout << str << " ";
   	 }

	return (0);
}