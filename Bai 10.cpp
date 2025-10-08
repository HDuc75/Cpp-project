#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a,b, P, Q;
	cin >> a >> b;	
	P = a/b;
	Q = a%b;
	cout << P << " "<< Q;
    return 0;
}

