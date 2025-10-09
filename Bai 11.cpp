#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,HS, P, Q;
	cin >> T >> HS;	
	P = T/HS;
	Q = T%HS;
	cout << P << " "<< Q;
    return 0;
}

