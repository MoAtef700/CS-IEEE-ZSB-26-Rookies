#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int h, a;
    cin >> h >> a;
    cout << ceil(h * 1.0 / a) << endl;

    return 0;
}