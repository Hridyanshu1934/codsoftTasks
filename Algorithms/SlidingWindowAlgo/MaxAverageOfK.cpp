#include <iostream>
using namespace std;
int main() {
    int nums[] = {1,2,3,4,5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 3;
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum = sum + nums[i];
    }
    int max = sum / k;
    for (int i = k; i < n; i++) {
        sum = sum + nums[i] - nums[i - k];
        if (sum / k > max) {
            max = sum / k;
        }
    }
    cout <<max << endl;
}
