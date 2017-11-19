#include <iostream>

using namespace std;

int main(){

	int n, a;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a; 
		if(a & 1) cout << a << " is odd" << endl;
		else cout << a << " is even" << endl;
	}

}