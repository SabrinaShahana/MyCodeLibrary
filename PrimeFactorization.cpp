vector<long long> factorize(long long n) {
    vector<long long> factors;
    for(long long i = 2; i * i <= n; i += 1) {
        while(n % i == 0) {
            n /= i;
            factors.push_back(i);
        }
    }
    if(n > 1) factors.push_back(n);
    return factors;
}
