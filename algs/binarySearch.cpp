#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int binarySearch(vector<int> A, int l, int r, int v){
  int mid = (int) floor((l + r)/2);
  if(A[mid] == v)
    return mid;
  if(A[mid] > v)
    return binarySearch(A, l, mid, v);
  else
    return binarySearch(A, mid, r, v);
  return -1;
}

int main(){
  fastio;
  vector<int> A = {1, 2, 3, 4, 5};
  cout << binarySearch(A, 0, (int) A.size(), 2) << '\n';
  return 0;
}
