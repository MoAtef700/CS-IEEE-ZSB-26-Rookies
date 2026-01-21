#include <iostream>
#include<vector>

using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n, k;
    cin >> n >> k;

    vector<int> nums(2 * n + 1);
    for (int i = 0; i < 2 * n + 1; i++)
        cin >> nums[i];


    for (int i = 2 * n - 1; i >= 1 && k > 0; i -= 2) {
        if (nums[i] - 1 > nums[i - 1] && nums[i] - 1 > nums[i + 1]) {
            nums[i]--;
            k--;
        }
    }

    for (int x : nums)
        cout << x << " ";
    cout << endl;

    return 0;
}