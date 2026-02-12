#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

string solve(){
  int n, j, k, strength = 0;
  cin >> n >> j >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];
  // sempre vai existir a possibilidade se nao for o ultimo
  if (k > 1){
    return "YES";
  } else {
    // caso seja, precisa-se verificar o restante de strength dos outros candidatos
    strength = a[j - 1];
    for (int x : a) {
      if (x > strength) return "NO";
    }
  }
  return "YES";
}

int main(){
  fastio;
  int t;
  cin >> t;
  while(t--)
    cout << solve() << '\n';
  return 0;
}
