#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  string alphabet = "abcdefghijklmnopqrstuvwxyz";

  cin >> s;
  int count;
  

  for(string::iterator iter_a = alphabet.begin(); iter_a != alphabet.end(); iter_a++){ 
    count = 0;
    for(string::iterator iter = s.begin(); iter != s.end(); iter++) {
      if(*iter == *iter_a) {
	count++;
      }
    }
    if (count>=2) {
      cout << "no" << endl;
      return 0;
    }
  }
  
  cout << "yes" << endl;
  return 0;
}
  
