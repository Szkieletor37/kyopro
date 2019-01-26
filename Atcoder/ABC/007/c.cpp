#include <bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;

#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define H_MAX 50
#define W_MAX 50

char c[H_MAX][W_MAX];
int d[H_MAX][W_MAX];
int sx,sy,gx,gy;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int H,W;

int bfs() {
  queue<pii> que;
  que.push(pii(sy,sx));
  rep(i,H) {
    rep(j,W) {
      d[i][j] = -1;
    }
  }
  d[sy][sx] = 0;
  while(que.size()) {
    pii p = que.front();
    que.pop();
    if(p.first == gy && p.second == gx)
      break;
    rep(i,4) {
      int ny = p.first + dy[i];
      int nx = p.second + dx[i];
      if(c[ny][nx] == '.' && 0 <= ny && ny < H && 0 <= nx && nx < W && d[ny][nx] == -1) {
	que.push(pii(ny,nx));
	d[ny][nx] = d[p.first][p.second] + 1;
      }
    }
  }
  return d[gy][gx];
}


int main() {
  cin >> H >> W;
  cin >> sy >> sx >> gy >> gx;
  sx--;sy--;gx--;gy--;
  rep(i,H) {
    rep(j,W) {
      cin >> c[i][j];
    }
  }

  cout << bfs() << endl;
  return 0;
}
