#include <bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;

#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define H_MAX 50
#define W_MAX 50

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int H,W;

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
  int l[n];
  int max=0,sum,maxnum;
  rep(i,n) {
    cin >> l[i];
    if(l[i] > max) {
      max = l[i];
      maxnum = i;
    }
  }
  sum = 0;
  rep(i,n) {
    if(i!=maxnum) 
      sum +=l[i];
  }
  if(sum > max)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
 
