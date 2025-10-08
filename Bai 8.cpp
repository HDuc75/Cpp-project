#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	double a,b, P, Q, R;
	cin >> a;
	cin >> b;
	
	P = 21*a + 5*b - 2009;
	Q = (21*pow(a,2) - 5*b) /(2009 * pow(b,2));
	R = (21*a + 5*b*b) / (2009 * b + 15); 
	cout << P << " "<< fixed << setprecision(4) << Q << endl;
	cout << fixed << setprecision(6) << R;
    return 0;
}

