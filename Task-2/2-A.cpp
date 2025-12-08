

#include <iostream>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--) {
		set<char> chars;
		int n;
		string s;
		cin >> n>>s;
		long long baloons = 0;
		for (int i = 0; i < n; i++) {
			if (chars.count(s[i])==0){
				chars.insert(s[i]);
				baloons += 2;
			}
			else baloons += 1;
		}
		
		cout << baloons << endl;

	}
}
