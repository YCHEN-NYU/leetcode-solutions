// __findMedium__.cpp
// find the medium in a sorted array
#include <iostream>
#include <vector> 
using namespace std;

int main() {
	vector<int> vec1 = {-1, 2, 3, 5, 8, 9, 10}, vec2 = {0, 1, 6, 8};
	/* SIZE = iHigh - iLow + 1, mid = SIZE/2
	SIZE = odd, median = arr[mid], like 7/2 = 3, vec1[3] = 5
	SIZE = even, median = (arr[mid-1] + arr[mid])/2.0, 
	like mid = 4/2 = 2, median = (arr[1] + arr[2])/2 = 3.5
	*/
}