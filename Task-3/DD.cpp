#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    ll n;
    int k;
    cin >> n >> k;

    int solve = 0;
    while (n > 0) {
        n /= k;
        solve++;
    }

    cout << solve << endl;
    return 0;
}