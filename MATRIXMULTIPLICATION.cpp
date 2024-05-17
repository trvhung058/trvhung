struct Matrix {
	vector<vector<int> > data;

	int row() const { return data.size(); }
	int col() const { return data[0].size(); }

	auto & operator [] (int i) { return data[i]; }
	const auto & operator[] (int i) const { return data[i]; }

	Matrix() = default;
	Matrix(int r, int c): data(r, vector<int> (c)) { }
	Matrix (const vector<vector<int> > &d): data(d) {
		assert(d.size());
		int size = d[0].size();
		assert(size);
		for (auto x: d) assert(x.size() == size);
	}

	static Matrix identity(ll n) {
		Matrix a = Matrix(n, n);
		while (n--) a[n][n] = 1;
		return a;
	}

	Matrix operator * (const Matrix &b) {
		Matrix a = *this;
		assert(a.col() == b.row());
		Matrix c(a.row(), b.col());
		for (int i = 0; i < a.row(); ++i)
			for (int j = 0; j < b.col(); ++j)
				for (int k = 0; k < a.col(); ++k) {
					c[i][j] += 1ll * a[i][k] % MOD * (b[k][j] % MOD) % MOD;
					c[i][j] %= MOD;
				}
		return c;
	}

	Matrix pow(ll exp) {
		assert(row() == col());
		Matrix base = *this, ans = identity(row());
		for (; exp > 0; exp >>= 1, base = base * base)
			if (exp & 1) ans = ans * base;
		return ans;
	}
};

Matrix T({
	{1, 1},
	{1, 0}
});