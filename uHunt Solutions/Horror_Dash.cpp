#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	int T, N, c, ans;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		ans = 0;
		while(N--){
				cin >> c;
				ans = max(ans, c);
		}
		cout << "Case " << i+1 << ": " << ans << endl;

	}

	return 0;
}