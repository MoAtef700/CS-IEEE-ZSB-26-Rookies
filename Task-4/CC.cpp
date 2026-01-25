#include <iostream>
#include <vector>


using namespace std;


# define ll long long 
int main() {
    int n;
    cin >> n;

   vector <ll> weights(20);
    ll total = 0;

    for (int i = 0; i < n; i++) {
        cin >> weights[i];
        total += weights[i];
    }

    ll minDiff = 1e18;

    for (int i = 0; i < (1 << n); i++) {
        ll group1 = 0;

        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                group1 += weights[j];
            }
        }

       ll group2 = total - group1;
      ll diff = group1 - group2;

        if (diff < 0) diff = -diff;

        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    cout << minDiff << endl;

    return 0;
}