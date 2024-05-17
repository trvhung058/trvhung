const int maxn = 1e6 + 5;
vector<int> prime;
bool is_prime[maxn];

void sieve(int n) {
	mem(is_prime, true); is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; ++i) {
		if (is_prime[i]) prime.pb(i);
		for (int nt: prime) {
			if (i * nt > n) break;
			is_prime[i * nt] = false;
			if (i % nt == 0) break;
		} 
	}
}