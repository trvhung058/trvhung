void dfs(int u, int par) {
	int child = 0; num[u] = low[u] = ++timeDfs;

	bool isJoint = false;
	for (auto v: adj[u]) {
		if (v == par) continue;
		if (num[v]) low[u] = min(low[u], num[v]);
		else {
			dfs(v, u);
			low[u] = min(low[u], low[v]);

			child++;
			if (u == par && child > 1) isJoint = true;
			else if (u != par && low[v] >= num[u]) isJoint = true;

			if (num[v] == low[v]) bridges.pb(make_pair(u, v));
		}
	}

	if (isJoint) joints.pb(u);
}

for (int i = 1; i <= n; ++i)
	if (!num[i])
		dfs(i, i);

