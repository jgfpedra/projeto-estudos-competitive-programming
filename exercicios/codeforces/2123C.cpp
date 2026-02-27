#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

void solve(){
  int n;
  cin >> n;
  vector<int> a(n+1), pre(n+1, INT_MAX), suf(n+2);
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    // verifica se num anterior eh menor que o numero atual do arr e forma arr com menor valor em tal posicao
    pre[i] = min(pre[i-1], a[i]);
  }
  for (int i = n; i >= 1; i--)
    // verifica se num posterior eh maior que o numero atual do arr e forma arr com maior valor em tal posicao
    suf[i] = max(suf[i+1], a[i]);
  for (int i = 1; i <= n; i++)
    cout << (a[i] == pre[i] || a[i] == suf[i] ? 1 : 0);
}

int main(){
  fastio;
  int t;
  cin >> t;
  while(t--){
    solve();
    cout << '\n';
  }
  return 0;
}
