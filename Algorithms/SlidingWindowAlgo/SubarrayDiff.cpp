#include <iostream>
using namespace std;

int main() {
    int nums[] = {8, 2, 4, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < n; i++) {
        int absoluteDifference = 0;
        for (int j = i; j < n; j++) {
            if (j > i) {
                int normalDifference = nums[j] - nums[j - 1];
                if (normalDifference < 0){
                    normalDifference = -normalDifference;
                } 
                absoluteDifference = absoluteDifference + normalDifference;
            }
            if (absoluteDifference <= 4) {
                for (int k = i; k <= j; k++) {
                    cout << nums[k] << " ";
                }
                cout << "-> Absolute Difference in the subarray is : " << absoluteDifference << endl;
            }
        }
    }
    return 0;
}
