#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
double a,b,c,cv,p,s;
cin >> a >> b >> c;

cv = a + b + c;
p = cv/2;
s = sqrt(p*(p-a)*(p-b)* (p-c));

cout << cv << endl;
cout << fixed << setprecision(3)<< s;
    return 0;
}

