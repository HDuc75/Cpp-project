#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long a,b,c;
    if(!(cin>>a>>b>>c)) return 0;
    
    long double A = a, B = b, C = c;
    long double p = (A + B + C) / 2.0L;
    long double t = p * (p - A) * (p - B) * (p - C); // bi?u th?c du?i can c?a Heron

    if (t <= 0.0L) { // không ph?i tam giác h?p l? (ho?c g?n b?ng 0)
        cout.setf(std::ios::fixed); cout<<setprecision(3)<<0.0<<'\n';
        return 0;
    }

    long double S = sqrtl(t);
    long double R = (A * B * C) / (4.0L * S);
    
    cout.setf(std::ios::fixed);
    cout<<setprecision(3)<<R<<"\n";
    return 0;
}

