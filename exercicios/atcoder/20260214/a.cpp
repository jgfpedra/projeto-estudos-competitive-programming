#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

void solve() {
    string s;
    cin >> s;
    if(s[0] == s[s.length() - 1])
      cout << "Yes" << '\n';
    else
      cout << "No" << '\n';
}

int main() {
  fastio;
  solve();
  return 0;
}
