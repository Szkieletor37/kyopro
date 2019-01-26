#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  map<char,int> m;
  string alpha = "abcdefghijklmnopqrstuvwxyz";

  for(int i=0; i<S.size(); i++) {
    m[S[i]]++;
  }

  for(int j=0; j<26; j++) {
    if(m[alpha[j]] == 0) {
      cout << alpha[j] << endl;
      return 0;
    }
    if(j == 25)
      cout << "None" << endl;
  }
  return 0;
}
