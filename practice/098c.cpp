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

  int N;
  string S;
  cin >> N >> S;
  
  int stand_west[N];
  int stand_east[N];

  int preview;
  
  stand_east[0] = 0;
  stand_west[N-1] = 0;
  for(int i=0; i<N; i++) {
    if(i==0) {
      continue;
    }
    else {
      stand_east[i] = stand_east[i-1];
      stand_west[N-i-1] = stand_west[N-i];
      if(S[i-1] == 'W')
	stand_east[i]++;
      if(S[N-i] == 'E')
	stand_west[N-i-1]++;
    }
  }
  int min = N,temp;
  for(int i=0; i<N; i++) {
    temp = stand_east[i]+stand_west[i];
    min = min > temp ? temp : min;
  }
  cout << min << endl;
  return 0;
}

  
