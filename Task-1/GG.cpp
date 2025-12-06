#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    for (int i = 1; ; i++) {


        int total = i * x;
        int lastDigit = total % 10;



        if (lastDigit == 0 || lastDigit == y) {
            cout << i;
            break;
        }


    }

    return 0;
}
