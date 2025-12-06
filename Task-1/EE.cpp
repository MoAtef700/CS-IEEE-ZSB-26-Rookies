#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string code = "codeforces";  

    while (n--) {
        char c;
        cin >> c;
        bool found = false;


        for (int i = 0; i < code.size(); i++) {
            if (code[i] == c) {
                found = true;
                break; 
            }


        }

        if (found) cout << "YES" << endl;
        
        else  cout << "NO" << endl;
        
    }

    return 0;
}
