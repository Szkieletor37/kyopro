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
 
  string s;
  cin >> s;

  int acc=0;
  int sum;
  int repeat_times = 1;
  int s_int[s.size()];
  for(int i=0; i<s.size(); i++) {
    s_int[i] = atoi(s[i]);
  }
  for(int i=0; i<s.size(); i++) {
    repeat_times *= 2;
  }
  for(int i=0; i<repeat_times; i++) {
    

    

