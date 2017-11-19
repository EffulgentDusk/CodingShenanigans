#include <bits/stdc++.h>

using namespace std;

int NCR(int n, int r)
{
    // minimal computation since: NCR(n, r) = NCR(n, n-r)
    if (r > n/2)
        return NCR(n, n-r);

    long out = 1;

    // guaranteed divisible
    for(int k = 1; k <= r; ++k)
    {
        out *= n-k+1;
        out /= k;
    }

    return out;
}

int main(){
        int n, r;
        cin >> n;
        cin >> r;
        int result = NCR(n,r);
        cout << result << endl;
}


