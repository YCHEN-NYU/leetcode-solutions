#include <iostream>
using namespace std;

int BinSearch(int *array, int array_size, int target) {
    return 0; 
}
int main() {
    int array[10] = {-1, 2, 3, 6, 8, 12, 15, 17, 29, 100}, array_size = sizeof(array)/sizeof(*array);
    int target;
    cout << "target = ";
    cin >> target;
    int iLeft = 0, iRight = array_size - 1, iCenter, iIndex = -1;
    while(iLeft < iRight) {
	   iCenter = (iLeft + iRight)/2;
            if(target == array[iCenter]){
		      iIndex = iCenter;
		      break;
	        }
	else {
		if(target < array[iCenter] )
			iRight = iCenter - 1;
		else
			iLeft = iCenter + 1; 
	}
    }
    printf("target = %d\n", target);
    printf("iIndex = %d\n", iIndex);
//    printf("array[iIndex] = %d\n", array[iIndex]);
    return 0; 
} 
