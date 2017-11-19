#include <bits/stdc++.h>

using namespace std;

int main()
{

string Jon_mouth;
string Doctor_mouth;

cin >> Jon_mouth;
cin >> Doctor_mouth;

if(Jon_mouth.length() < Doctor_mouth.length()) cout << "no";
if(Jon_mouth.length() >= Doctor_mouth.length()) cout << "go";


return 0;
}