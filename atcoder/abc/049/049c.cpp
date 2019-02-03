#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string rev_array[4] = {"dream", "dreamer", "erase", "eraser"};

  for(int i=0; i<4; i++) {
    reverse(rev_array[i].begin(), rev_array[i].end());
  }
  int ptr_s=s.length();
  int ptr_s_preview = ptr_s;
  bool flag[4] = {false,false,false,false};

  while(1) {
    for(int j=0; j<4; j++) {
      for(int i=0; i<rev_array[j].length(); i++) {
	if(rev_array[j][i] != s[ptr_s-1-i])  {
	  break;
	}
	if(i == rev_array[j].length()-1) {
	  flag[j] = true;
	  ptr_s -= rev_array[j].length();
	}
      }
      if(ptr_s_preview != ptr_s) {
	break;
      }
    }
    if(flag[0] == false && flag[1] == false && flag[2] == false && flag[3] == false) {
      cout << "NO" << endl;
      return 0;
    }
    if(ptr_s == 0) {
      cout << "YES" << endl;
      return 0;
    }
    ptr_s_preview = ptr_s;
    for(int i=0; i<4; i++) 
      flag[i] = false;
  }

}
    
