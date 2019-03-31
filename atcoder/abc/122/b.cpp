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
	string s;
	cin >> s;
	int count = 0;
	int max = 0;
	rep(i,s.size()) {
		rep(j, s.size()) {
			if(i > j)  
				continue;
			int t = i;
			while(t <= j) {
				if(s[t] == 'A' || s[t] == 'C' || s[t] == 'G' || s[t] == 'T') {
					count = count + 1;
					max = max > count ? max : count;
				}
				else {
					count = 0;
				}
				t++;
			}
			count = 0;
		}
	}
	cout << max << endl;
			

  return 0;
}
 
