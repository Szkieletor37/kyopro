#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  long long ans = 1;
  for(int i=2; i<n+1; i++) {
   ans *= i; 
   ans %= 1000000007;
  }

  cout << ans << endl;
  return 0;
}
