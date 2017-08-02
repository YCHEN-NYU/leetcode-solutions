#include <iostream>
using namespace std;

int binSearch(int arr[], int iLeft, int iRight, int key) {
	int iMid = (iLeft + iRight)/2;
	// cout << "arr[iMid] = " << arr[iMid] << endl;
	if(key == arr[iMid]) return iMid;
	else 
	{
		if (key < arr[iMid]) {
			return binSearch(arr, iLeft, iMid, key);
		}
		else {
			return binSearch(arr, iMid, iRight, key);
		}
	}
}


void print_arr(int arr[], int size) {
	for(int i = 0; i < size; ++i){
		cout << arr[i] << " ";
		if((i+1)%10 == 0) 
			cout << endl;
	} cout << endl;
}


int main() {
	int arr[11] = {-2, 0, 5, 8, 12, 16, 23, 38, 56, 72, 91};
	cout << "original array" << endl;
	print_arr(arr, 10);
	int key = 5;
	cout << "keyIndex = " << binSearch(arr, 0, 10, key) << endl;;


}