#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

void solve(){
  unsigned ll bit;
  cin >> bit;
  bit = ~(1ULL << ((sizeof(bit)*8)-1));
  cout << bit << '\n';
}

int main(){
  fastio;
  solve();
  return 0;
}
