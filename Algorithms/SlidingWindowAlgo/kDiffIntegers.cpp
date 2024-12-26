#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,1,2,3};
    int n = 5;
    int k = 3;
    for (int i = 0; i < n; i++) {
        int arr2[256] = {0};
        for (int j = i; j < k; j++) {
            if (arr2[arr[j]]++ > 0) {
                break;
            }
            for (int g = i; g <= n; g++) {
                cout << arr[g];
            }
            cout << endl;
        }
    }
}
