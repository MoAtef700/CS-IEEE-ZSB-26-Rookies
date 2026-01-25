#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

string s;
bool used[8];
vector<string> ans;

void solve(string cur) {
    if (cur.size() == s.size()) {
        ans.push_back(cur);
        return;
    }

    for (int i = 0; i < s.size(); i++) {
        if (used[i]) continue;
        if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) continue;

        used[i] = true;
        solve(cur + s[i]);
        used[i] = false;
    }
}

int main() {
    cin >> s;
    sort(s.begin(), s.end());

    solve("");

    cout << ans.size() << "\n";
    for (auto& x : ans)
        cout << x << "\n";

    return 0;
}
