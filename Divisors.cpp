#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 25;
long long sod[N], nod[N];


int main() {
    for(int i = 1; i < N; i += 1) {
        for(int j = i; j < N; j += i) {
            nod[j] += 1;
            sod[j] += i;
        }
    }
    return 0;
}
