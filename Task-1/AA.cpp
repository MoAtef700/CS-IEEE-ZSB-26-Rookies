

#include <iostream>


using namespace std;

int main()
{
	int n;
	cin >> n;
	int max=0;

	while (n--) {
		int x;
		int Solve = 0;
		for (int i=0; i<3; i++) {
			cin >> x;
			if (x==1) Solve++;
							
		}
		if (Solve >= 2) max++;
	   
	}

	cout << max << endl;

	return 0;
}
