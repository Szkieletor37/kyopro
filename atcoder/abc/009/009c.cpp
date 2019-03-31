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

string swapchar(const string s, int a, int b) {
	string ret = s;
	ret[a] = s[b];
	ret[b] = s[a];

	return ret;
}

int find_early_alphabet(const string s, int cp) {
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	int i=0;
	size_t t;
	while(1) {
		t = s.find(alpha[i], cp);
			if (t != string::npos) {
				break;
			}
			else {
				i++;
			}
	}
	return t;
}
	


int main() {
	int n,k;
	string s;
	cin >> n >> k;
	cin >> s;
	string cs = s; //current string
	int swaptimes = 0;
	int cp = 0; // current position
	while(swaptimes < k) {
		int a = find_early_alphabet(cs, cp);
		if(s[cp] == cs[cp] && s[cp] != cs[a]) {
			swaptimes++;
		}
		if(s[a] == cs[a] && s[a] != cs[cp]) {
			swaptimes++;
		}
		if(s[a] != cs[a] && s[a] == cs[cp]) {
			swaptimes--;
		}
		cs = swapchar(cs,cp,a);
		if(cp == s.size() - 1) {
			break;
		}
		cp++;
	}

	cout << cs << endl;
  return 0;
}
 
