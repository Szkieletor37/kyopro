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

	string s,t;
	cin >> s >> t;

	vector<int> vec;
	rep(i,s.size()) {
		int k = i;
		rep(j,t.size()) {
			if(s[k] == t[j] || s[k] == '?') {
				if(j == t.size()-1) {
					vec.pb(i);
				}
				else {
					k++;
					continue;
				}
			}
			else
				break;
		}
	}
	if(vec.size() == 0) {
		cout << "UNRESTORABLE" << endl;
		return 0;
	}
	vector<int>::iterator iter = vec.begin();
	vector<string> ans;
	while(iter != vec.end()) {
		string acc = s;
		rep(i,t.size()) {
			acc[*iter + i] = t[i];
		}
		rep(i,s.size()) {
			if(acc[i] == '?')
				acc[i] = 'a';
		}
		ans.pb(acc);
		iter++;
	}

	sort(ans.begin(), ans.end());

	cout << *(ans.begin()) << endl;
  return 0;
}
 
