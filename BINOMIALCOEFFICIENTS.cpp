const int MOD = 1e9 + 7;
const int maxn = 1e5 + 5;

ll binpow(ll a, ll b) {
	ll res = 1;
	while (b) {
		if (b & 1) res = res * a % MOD;
		a = a * a % MOD;
		b >>= 1;
	}
	return res;
}
 
void precalc() {
	fac[0] = 1;
	for (int i = 1; i < maxn; ++i)
		fac[i] = i * fac[i - 1] % MOD;
 
	ifac[maxn - 1] = binpow(fac[maxn - 1], MOD - 2);
	for (int i = maxn - 2; i >= 0; --i)
		ifac[i] = (i + 1) * ifac[i + 1] % MOD;
}
 
ll C(ll n, ll k) {
	assert(n >= k);
	return fac[n] * ifac[k] % MOD * ifac[n - k] % MOD;
}