#include <iostream>
using namespace std;

int main() {
    string bleh = "kanak";
    int n = bleh.length();

    for (int i = 0; i < n; i++) {
        int arr[256] = {0};
        for (int j = i; j < n; j++) {
            if (arr[bleh[j]]++ > 0) {
                break;
            }
            for (int k = i; k <= j; k++) {
                cout << bleh[k];
            }
            cout << endl;
        }
    }
}
