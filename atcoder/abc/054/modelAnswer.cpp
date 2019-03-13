#include <bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;

#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define H_MAX 50
#define W_MAX 50

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int H,W;

int N,M;
int ok[10][10];
int V[10];

void solve() {
  int i,j,k,l,r,x,y; string s;
  cin >> N >> M;
  rep(i,M) {
    cin >> x >> y;
    ok[x-1][y-1] = 1;
    ok[y-1][x-1] = 1;
  }
  rep(i,N) 
    V[i] = i;

  int ret=0;
  while(next_permutation(V,V+N)) {
    if(V[0]!=0) continue;
    rep(i, N-1) {
      if(ok[V[i]][V[i+1]]==0)
	break;
    }
      if(i==N-1) 
	ret++;
  }
  cout << ret<<endl;
}

namespace patch {
  template < typename T > std::string to_string( const T& n )
  {
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
  }
}

int main() {

  return 0;
}
 
