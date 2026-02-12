#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

void solve(){
  ll a, b;
  int count = 0;
  cin >> a >> b;
  while ((b != a) && (b > a)){
    if (b % 8 == 0){
      count++;
      b /= 8;
    }
    if (b % 4 == 0){
    }
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
