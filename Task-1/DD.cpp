#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;

        if (x + y == z || x + z == y || y + z == x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
