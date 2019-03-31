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
	int n;
	cin >> n;
	long long x = 1000000007;
	long long count = 0;
	long long ans;

	// agc, axgc, gac, acg, agxc
	// aggc,atgc,agtc
	// aagc,agcc, acgc,agac
	// N に "agc" が部分文字列
	// 4^N - (N-3+1)*(4^(N-2)) - (N-2)*(4^(N-2)) - (N-2)*(4^(N-2))
	// 4^N - (N-2)*3*4*(4^(N-3))
	// 4^N - (N-4+1)*5*(4^(N-3))
	// 4^N - ((N-2)*3*4+(N-3)*5)*(4^(N-3))
	// 4^N - (17N - 39)*(4^(N-3))
	// (103-17N) * (4^(N-3))
	
	long long dp[100];
	dp[0] = 4;
	//dp[1] = 16;
	//dp[2] = 61;

	long long include[100][9]; //a,g,at,ag->c, ga->c, ac->g, agg->c, atg->c, agt->c
	//  
	rep(i,9) {
		if(i<2)
			include[0][i] = 1;
		else
			include[0][i] = 0;
	}
	rep(i,n) {
		if(i == 0) {
			continue;
		}
		include[i][0] = dp[i-1];
		include[i][1] = dp[i-1] - include[i-1][5];
		include[i][2] = include[i-1][0];
		include[i][3] = include[i-1][0];
		include[i][4] = include[i-1][1];
		include[i][5] = include[i-1][0];
		include[i][6] = include[i-1][3];
		include[i][7] = include[i-1][2];
		include[i][8] = include[i-1][3];
		
		dp[i] = dp[i-1]*4 - include[i-1][3] - include[i-1][4] - include[i-1][5] - include[i-1][6] - include[i-1][7] - include[i-1][8];
	}

	count = dp[n-1];

	ans = count % x;
	cout << ans << endl;
  return 0;
}
 
