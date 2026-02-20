#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

void solve() {
  int n, yes = 0;
  cin >> n;
  ll num;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num == 67){
      yes = 1;
    }
  }
  cout << ((yes) ? "YES" : "NO") << '\n';
}

int main() {
  fastio;
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
