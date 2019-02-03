#include <bits/stdc++.h>
#include <string>
using namespace std;

namespace patch {
  template < typename T > std::string to_string( const T& n )
  {
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
  }
}
int main() {
  int H,W;
  cin >> H >> W;
  string str[H];
  for(int i=0; i<H; i++) {
    cin >> str[i];
  }

  int count = 0;
  string temp;
  for(int i=0; i<H; i++) {
    for(int j=0; j<W; j++) {
      if(str[i][j] == '.') {
	count = 0;
	for(int k=0; k<3; k++) {
	  for(int l=0; l<3; l++) {
	    if(i-1+k >= 0 && i-1+k < H && j-1+l >=0 && j-1+l < W) {
	      if(str[i-1+k][j-1+l] == '#')
		count++;
	    }
	  }
	}
	temp = patch::to_string(count); 
	str[i][j] = temp[0];
	// str[i][j] = char(count + '0');
      }
    }
  }

  for(int i=0; i<H; i++) {
    cout << str[i] << endl;
  }
  return 0;
}

