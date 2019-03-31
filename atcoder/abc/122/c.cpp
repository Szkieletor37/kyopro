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
	int n,q;
	cin >> n >> q;
	string s;
	cin >> s;
	vector<int> l,r;
	int lt,rt;
	rep(i,q) {
		cin >> lt >> rt;
		l.pb(lt);
		r.pb(rt);
	}

	int ruisekiwa[n];
	bool check[n];
	rep(i,n) {
		check[i] = false;
		ruisekiwa[i] = 0;
	}
	rep(i,n) {
		if(i==0)
			continue;
		if(s[i] == 'C' && s[i-1] == 'A') {
			ruisekiwa[i] = ruisekiwa[i-1] + 1;
			check[i] = true;
		}
		else {
			ruisekiwa[i] = ruisekiwa[i-1];
		}
	}
	rep(i,q) {
		int ans;
		if(l[i] == 1) {
			ans = ruisekiwa[r[i]-1];
		}
		else {
			ans = ruisekiwa[r[i]-1] - ruisekiwa[l[i] - 2];
		}
		if(check[l[i] - 1] == true)
			ans--;
		cout << ans << endl;
	}

  return 0;
}
 
