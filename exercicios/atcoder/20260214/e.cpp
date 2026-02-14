#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

void solve() {
  int n = 0, num;
  for(int i = 0; i < n; i++){
    cin >> num;
    cout << lcm(num, 998244353) << ' ';
  }
  cout << '\n';
}

int main() {
  fastio;
  int t = 0;
  cin >> t;
  while(t != 0){
    solve();
    t--;
  }
  return 0;
}
