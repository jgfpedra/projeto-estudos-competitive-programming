#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

//https://codeforces.com/blog/entry/78355

ll getR(ll a) {
  while (a % 2 == 0)
    a /= 2;
  return a;
}

void solve() {
  ll a, b;
  int sol = 0;
  cin >> a >> b;
  if(a > b)
    swap(a, b);
  if(getR(b) != getR(a)){
    cout << "-1" << '\n';
    return;
  }
  b /= a;
  while(b >= 8)
    b /= 8, ++sol;
  if(b > 1) ++sol;
  cout << sol << '\n';
}

int main() {
  fastio;
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
