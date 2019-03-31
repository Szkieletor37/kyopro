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

bool pairComp(const pii& fip, const pii& sep) {
	return fip.se < sep.se;
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

	int n,m;
	cin >> n >> m;
	vector<pii> bridges;
	int a,b;
	rep(i,m) {
		cin >> a >> b;
		bridges.pb(pii(a,b));
	}
	sort(bridges.begin(), bridges.end(), pairComp);

	vector<pii>::iterator iter=bridges.begin();
	int temp1 = -1;
	int ans = 0;
	while(iter != bridges.end()) {
		if(temp1 == iter->se || temp1 > iter->fi) {
			iter++;
			continue;
		}
		temp1 = iter->se;
		ans++;
		iter++;
	}

	cout << ans << endl;
  return 0;
}
 
