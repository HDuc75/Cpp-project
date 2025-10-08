#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long a_ll, b_ll, c_ll;
    if (!(cin >> a_ll >> b_ll >> c_ll)) return 0;
    
    long double a = (long double)a_ll;
    long double b = (long double)b_ll;
    long double c = (long double)c_ll;
    
    
    long double numP = 21.0L * a * a + 5.0L * b * b;
    long double denP = 2009.0L * c * c + 15.0L;
    long double P = numP / denP;
    
    
    long double inside = a * a - 2.0L * b;
    
    if (inside < 0 && fabsl(inside) < 1e-18L) inside = 0;
    
    if (inside < 0) inside = 0;
    long double numQ = sqrtl(inside);
    long double denQ = 3.0L * c * c + 4.0L;
    long double Q = numQ / denQ;
    
    cout.setf(std::ios::fixed); 
    cout<<setprecision(4)<<P<<" "<<Q<<"\n";
    return 0;
}

