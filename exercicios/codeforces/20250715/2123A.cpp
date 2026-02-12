#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

/*
 * a + b (mod 4) --> dois valores sao identicos se sao equivalente mod 4
 * todos os numeros ficam no range 0 a 3
 * com isso, bob so ganha se n estiver num multiplo desses
 */
string solve(){
  int n;
  cin >> n;
  return (n % 4 ? "Alice" : "Bob");
}

int main(){
  fastio;
  int t;
  cin >> t;
  while(t--)
    cout << solve() << '\n';
  return 0;
}
