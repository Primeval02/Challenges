// Bradley Tate
// 7/8/24
// Two Sum with brute force approach. O(n^2).

#include <iostream>

using namespace std;

void checkSum(int target, int * nums, int size) {
	//loop through array for each element in aray to check if they equal sum; inefficient
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			int sum = nums[i] + nums[j];
			if (sum == target) {
				cout << "\nSum composed of indicies: [" << i << ", " << j << "]." << endl;
				cout << "Sum composed of numbers: [" << nums[i] << ", " << nums[j] << "]." << endl;
				return;
			}
		}
	}
	cout << "No sum found" << endl;

}

int main() {
	int nums[] = {12, 4, 15, 7, 1, 18, 9, 11, 6, 3};
	int size = sizeof(nums) / sizeof(nums[0]);
	int target;

	//printing statements
	cout << "Enter a target sum: ";
	cin >> target;
	cout << "\nNumbers array: {";  
	for(int i = 0; i < size; i++) {
		if (i != 9)
			cout << nums[i] << ", ";
		else
			cout << nums[i];
	}
	cout << "}" << endl;

	checkSum(target, nums, size);	//function call
	return 0;


}
