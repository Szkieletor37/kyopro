#include <bits/stdc++.h>
using namespace std;

int main() {

  string s, odds;

  cin >> s;

  for(int i=0; i<s.size(); i++) {
    if(i%2 == 0) {
      odds.insert(odds.end(), s[i]);
    }
  }
  cout << odds << endl;
  return 0;
}
