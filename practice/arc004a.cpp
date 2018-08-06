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
 
  int n;
  cin >> n;
  int x[n],y[n];
  for(int i=0; i<n; i++) {
    cin >> x[i] >> y[i];
  }

  int max_distance = 0;
  int temp;

  for(int i=0; i<n; i++) {
    for(int j=0; j<i; j++) {
      temp = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
      max_distance = temp > max_distance ? temp : max_distance;
    }
  }
  cout << fixed << setprecision(4) << sqrt(max_distance) << endl;
  return 0;
}
      


