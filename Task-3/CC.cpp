#include <iostream>
#include<iomanip>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int X;
    double Y;

    cin >> X >> Y;

    if (X % 5 == 0 && Y >= X + 0.50) {
        Y = Y - X - 0.50;
    }

    cout << fixed << setprecision(2) << Y << endl;
    return 0;
}