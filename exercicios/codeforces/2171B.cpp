/*https://codeforces.com/problemset/problem/2171/B*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

void solve() {
  int n, num = 0;
  cin >> n;
  int c[n];
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  for (int i = 0; i < n; i++) {
    if (c[i] == -1){
      if (i == (n - 1)) {
        c[i] = c[0];
      } else {
        c[i] = 0;
      }
    }
  }
  num = c[n-1] - c[0];
  cout << (num < 0 ? num * -1 : num) << '\n';
  for (int i = 0; i < n; i++)
    cout << c[i] << " ";
  cout << '\n';
}

int main() {
  fastio;
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
