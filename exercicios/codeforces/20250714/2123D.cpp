#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

string solve(){
  int n, k, count = 0;
  string s;
  cin >> n >> k;
  cin >> s;
  for(char b : s){
    if(b == '1'){
      count++;
    }
  }
  return (count <= k || n < 2*k ? "Alice" : "Bob");
}

int main(){
  fastio;
  int t;
  cin >> t;
  while(t--){
    cout << solve();
    cout << '\n';
  }
  return 0;
}
