#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

void solve(int t) {
  int c[t+1];
  int pos = 0;
  for (int i = 1; i <= t; i++) {
    cin >> c[i];
  }
  for (int i = 1; i <= t; i++) {
    pos = i;
    while (c[pos] != pos) {
      c[pos] = c[c[pos]];
      pos = c[pos];
    }
    cout << pos << ' ';
  }
  cout << '\n';
}

int main() {
  fastio;
  int t = 0;
  cin >> t;
  solve(t);
  return 0;
}
