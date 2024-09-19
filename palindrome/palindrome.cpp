#include <iostream>
#include <cstring>

using namespace std;

int main() 
{ 
	char word[20];
	cout << "Enter a word to check if it's a palindrome: ";
	cin >> word;

	size_t size = strlen(word);

	// Size divided by 2 because we only check half, or towards the center
	for (size_t i = 0; i < size / 2; i++) {  
		if (word[i] != word[size - i - 1]) {
			cout << "Not a palindrome" << endl;
			return 0;
		}
	}
	cout << "You have a palindrome!" << endl;
	return 0;
}
