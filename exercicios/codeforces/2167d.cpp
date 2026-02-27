#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

/*
 * gcd(2, 3) = 1
 * gcd(6, 3) = 3
 *
 *
 */

ll gcd(ll a, ll b){
  if(a == 1)
    return b;
  else gcd(b/a, a);
  return -1;
}

void solve(){
  ll n;
  cin >> n;
  ll c[n];
  for (ll i = 0; i < n; i++){
    cin >> c[i];
  }
}

int main(){
  fastio;
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}
