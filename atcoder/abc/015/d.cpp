#include <bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;

#define fi first
#define se second
#define pb push_back
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
	int w=0,N=0,k=0;
	cin >> w >> N >> k;
	int a,b;
	vector<int> va,vb;
	rep(i,N) {
		cin >> a >> b;
		va.pb(a);
		vb.pb(b);
	}
	int inf = 100000;
	static int dp[51][10001][51];
	rep(i,N+1) {
		rep(j,w+1) {
			rep(t,k+1) {
				dp[i][j][t] = -inf;
			}
		}
	}
	rep(i,N+1) {
	dp[i][0][0] = 0;
	}
	for(int i=1; i<=N; i++) {
		for(int j=0; j<=w; j++) {
			for(int t=1; t<=k; t++) {
				if(j >= va[i-1])
					dp[i][j][t] = dp[i-1][j][t] > dp[i-1][j - va[i-1]][t-1] + vb[i-1] ? dp[i-1][j][t] : dp[i-1][j - va[i-1]][t-1] + vb[i-1]; 
				else 
					dp[i][j][t] = dp[i-1][j][t];
			}
		}
	}
	int max = -1;
	for(int j=0; j<=w; j++) {
		for(int t=0; t<=k; t++) {
			max = max > dp[N][j][t] ? max : dp[N][j][t];
		}
	}
	cout << max << endl;
	
		
  return 0;
}
 
