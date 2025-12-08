#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
         }
        int NumRepated;
        if (a[0] == a[1]) NumRepated = a[0];

        else if (a[0] == a[2]) NumRepated = a[0];

        else NumRepated = a[1];



        for (int i = 0; i < n; i++) {
            if (a[i] != NumRepated) {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
}
