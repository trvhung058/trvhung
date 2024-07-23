#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;

// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")

//-----------------------
// #define   ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define            ll long long
#define           ull unsigned long long
#define            db double
#define            ld long double
#define            pb push_back
#define            pf push_front
#define            mp make_pair
#define      mem(f,x) memset(f, x, sizeof(f))
#define   __lcm(a, b) (1ll * a * b) / __gcd(a, b)
#define  bit(mask, i) ((mask >> i) & 1)
#define           pii pair<int, int>
#define           pll pair<ll, ll>
#define            el '\n'
#define             F first
#define             S second
#define         io(x) freopen(x".inp","r",stdin),freopen(x".out","w",stdout)
//-----------------------
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
const int MULTI = 0;
const int dx[4]{0, 1, 0, -1}, dy[4]{1, 0, -1, 0}; // R D L U
const int ddx[4]{-1, 1, 1, -1}, ddy[4]{1, 1, -1, -1}; // UR DR DL UL
const char cx[4]{'R', 'D', 'L', 'U'};
const ll base = 31;
const int nMOD = 2;
const ll mods[] = {(ll)1e9 + 3, (ll)1e9 + 3777, (ll)1e9 + 10777, (ll)1e9 + 19777};
//-----AUTHOR trvhung VNG High School for Gifted Student-----

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    #endif

    if (!MULTI) solve();
    else {
        int test; cin >> test;
        while (test--) solve();
    }
    
    return 0;
}

