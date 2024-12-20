#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

long long int mod_exp(long long int base, long long int exp, int mod) {
    int result = 1;
    base = base % mod; 
    while (exp > 0) {
        if (exp % 2 == 1) { // If exp is odd
            result = (result * base) % mod;
        }
        exp = exp >> 1; // Divide exp by 2
        base = (base * base) % mod; // Square the base
    }
    return result;
}


int main() {
    long long int t;
    cin >> t;
    
    vector<int> v1(t), v2(t);
    for (long long int i = 0; i < t; i++) cin >> v1[i];
    for (long long int i = 0; i < t; i++) cin >> v2[i];
    
    for(long long int i = 0; i < t; i++) {
        if(v1[i] == v2[i])
            cout << 1 << "\n";
        else
            cout << mod_exp(2, v2[i], M) << "\n"; 
    }
    return 0;
}
