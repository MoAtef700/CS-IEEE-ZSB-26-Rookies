#include <iostream>
using namespace std;

long long function(int n) {
    if (n == 0) return 1;
    return n * function(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << function(n) << endl;
    return 0;
}