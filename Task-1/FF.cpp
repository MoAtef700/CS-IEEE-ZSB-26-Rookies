
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--) {
		vector<int> Nums(4);

		for (int i=0; i < 4; ++i) {
			cin >> Nums[i];
			
		}
		if (Nums[0] == Nums[1] && Nums[1] == Nums[2] && Nums[2] == Nums[3]) {
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}