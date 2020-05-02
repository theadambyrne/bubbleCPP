#include <iostream>
using namespace std;

int main() {
	int length = 7;
	int nums[length] = {2,1,3,5,4,7,6};
	
	for(int i = 0; i<length; i++) {
	cout << nums[i];
	cout << " "; 
	}
	cout << "\n";

	for(int i = 0; i<length; i++) {
	if(nums[i+1] != length and nums[i] > nums[i+1]){
		int x = nums[i+1];
		int y = nums[i];
		nums[i+1] = 0;
		nums[i+1] += y;
	       	nums[i] = 0;
		nums[i] += x;	
	}
	cout << nums[i];
	cout << " ";
	}	
	cout << "\n";
	return 0;
}


