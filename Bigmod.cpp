#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

long long bigmod(long long a, long long b) {
    long long ret = 1;
    while(b) {
        if(b & 1) ret = ret * a % MOD;
        a = a * a % MOD;
        b /= 2;
    }
    return ret;
}

long long modInv(long long b) {
    return bigmod(b, MOD - 2);
}

int main() {

    return 0;
}
