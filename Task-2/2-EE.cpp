#include <iostream>
#include <set>
#include <cctype>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    set<char> chars;

    if (n < 26) {
        cout << "NO\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        chars.insert(tolower(s[i])); 
    }

    if (chars.size() == 26) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
