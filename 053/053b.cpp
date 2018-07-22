#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;
  int min_i, max_z;
  int count=0;

  for(int i=0; i<s.size(); i++) {
    if(s[i] == 'A' && count==0) {
     min_i = i;
     count++;
    }
    if(s[i] == 'Z') {
      max_z = i;
    }
  }

  cout << max_z - min_i + 1 << endl;
  return 0;
}
