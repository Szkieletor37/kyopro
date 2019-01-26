#include <bits/stdc++.h>
using namespace std;

int main() {
  long long x,y;
  cin >> x >> y;

  long long a=x;
  long long count = 0;

  while(a <= y) {
    a *= 2;
    count++;
  }
  cout << count << endl;
  return 0;
}
