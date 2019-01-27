#include <bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;

#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define H_MAX 50
#define W_MAX 50

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int H,W;

char c[H_MAX][W_MAX];
char d[H_MAX][W_MAX];

namespace patch {
  template < typename T > std::string to_string( const T& n )
  {
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
  }
}

int bfs() {
  queue<pii> que;
  que.push(pii(0,0));
  rep(i,H){
    rep(j,W){
      d[i][j]=-1;
    }
  }
  d[0][0]=1;
  while(que.size()) {
    pii p=que.front();
    que.pop();
    if(p.first==H-1&&p.second==W-1)
      break;
    rep(i,4) {
      int ny=p.first+dy[i],nx=p.second+dx[i];
      if(ny >= 0 && ny < H && nx >= 0 && nx < W && c[ny][nx] == '.' && d[ny][nx] == -1) {
	que.push(pii(ny,nx));
	d[ny][nx] = d[p.first][p.second]+1;
      }
    }
  }
  return d[H-1][W-1];
}
      
int main() {

  cin >> H >> W;
  int count=0;
  rep(i,H){
    rep(j,W){
      cin >> c[i][j];
      if(c[i][j] == '.')
	count++;
    }
  }
  int turns = bfs();
  if(turns == -1) {
    cout << -1 << endl;
  }
  else {
    cout << count - turns << endl;
  }

  return 0;
}
 
