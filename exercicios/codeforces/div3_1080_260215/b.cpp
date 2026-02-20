#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

void solve(){
  int n, yes = 1;
  cin >> n;
  ll c[n+1];
  for(int i = 1; i <= n; i++)
    cin >> c[i];
  for(int i = 1; i <= n/2; i++){
    if(c[i] > c[2*i]){
      swap(c[i], c[2*i]);
    }
  }
  for(int i = 1; i < n; i++){
    if(c[i] > c[i+1]){
      yes = 0;
      break;
    }
  }

  cout << (yes ? "YES" : "NO") << '\n';
}

int main(){
  fastio;
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}
