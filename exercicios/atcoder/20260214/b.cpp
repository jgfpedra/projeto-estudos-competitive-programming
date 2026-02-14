#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

void solve(int t) {
  string texts[t];
  string res;
  int max = 0, tam = 0, pos = 0;
  for(int i = 0; i < t; i++){
    cin >> texts[i];
  }
  for(int i = 0; i < t; i++){
    if(int(texts[i].length()) > max){
      max = int(texts[i].length());
    }
  }
  for(int i = 0; i < t; i++){
    tam = int(texts[i].length());
    pos = (max - tam) / 2;
    for(int j = 0; j < pos; j++)
      res = res + '.';
    for(int j = 0; j < tam; j++){
      res = res + texts[i][j];
    }
    for(int j = 0; j < pos; j++)
      res = res + '.';
    cout << res << '\n';
    res = "";
  }
}

int main() {
  fastio;
  int t;
  cin >> t;
  solve(t);
  return 0;
}
