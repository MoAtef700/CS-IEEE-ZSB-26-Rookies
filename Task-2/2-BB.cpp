#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    if (n == 1) {
        s[0] = islower(s[0]) ? toupper(s[0]) : tolower(s[0]);
        cout << s;
        return 0;
    }

    bool restUpper = true;
    for (int i = 1; i < n; i++) {
        if (!isupper(s[i])) {
            restUpper = false;
            break;
        }
    }

    if (restUpper) {
        for (int i = 0; i < n; i++) {
            if (islower(s[i])) s[i] = toupper(s[i]);
            else s[i] = tolower(s[i]);
        }
    }

    cout << s;
    return 0;
}
