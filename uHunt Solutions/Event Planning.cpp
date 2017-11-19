#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int People, budg, hotels, weekends;
	int Pricepp, beds, minCost;

	while (scanf("%d %d %d %d\n", &People, &budg, &hotels, &weekends) != EOF) {
		minCost = 2000000000;
		while (hotels--) {
			cin >> Pricepp;
			for(int i=0; i<weekends; i++) {
                    cin >> beds;
                        if (beds >= People) {
                            minCost = min(minCost, People*Pricepp);
                            string s;
                            getline(cin, s);
                            break;
                    }
                }
            }
		if (minCost != 2000000000 && minCost <= budg)
			cout << minCost << endl;
		else
			cout << "stay home" << endl;
	}

	return 0;
}