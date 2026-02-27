#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

//https://github.com/DionysiosB/CodeForces/blob/master/2161A-RoundTrip.cpp

void solve() {
  ll r, x, d, n, cnt = 0;
  string s;
  cin >> r >> x >> d >> n;
  cin >> s;
  for(ll p = 0; p < n; p++){
    if(s[p] == '1' || r < x){
      cnt++;
      r -= d;
    }
  }
  cout << cnt << '\n';
}

int main() {
  fastio;
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
