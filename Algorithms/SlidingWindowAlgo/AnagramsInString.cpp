#include <iostream>
using namespace std;
int main() {
    string s = "cbaebabacd";
    string p = "abc";
    int n = s.size(), m = p.size();
    if (m > n) {
        cout << "[]" << endl;
        return 0;
    }
    int a[26] = {0}, b[26] = {0};
    for (int i = 0; i < m; i++) {
        a[p[i] - 'a']++;
        b[s[i] - 'a']++;
    }
    int resultIndex = 0;
    if (equal(a, a + 26, b)) resultIndex++;

    for (int i = m; i < n; i++) {
        b[s[i] - 'a']++;
        b[s[i - m] - 'a']--;
        
        if (equal(a, a + 26, b)) {
            cout << i - m + 1 << " ";
        }
    }
    if (resultIndex > 0) {
        cout << endl;
    } else {
        cout << "[]" << endl;
    }
}
