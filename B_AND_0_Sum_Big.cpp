#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

void solve() {
  ll n, k;
  cin >> n >> k;
  ll ans = 1;
  for(int i = 0; i <k; i++) {
    ans = (ans * n) % MOD;
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  for (int i = 1; i<=t; i++) {
    solve();
  }
  return 0;
}