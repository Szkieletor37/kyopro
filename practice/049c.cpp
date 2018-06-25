#include <bits/stdc++.h>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
	string s;
	cin >> s;

	reverse(s.begin(), s.end());
	for(int i=0; i<4; i++) 
		reverse(divide[i].begin(), divide[i].end());

	bool can = true;
	for(int i=0; i<s.size();){
		bool can2 = false; //4個の文字列のどれかでdivideできるか
		for(int j=0; j<4; j++) {
			string d = divide[j];
			if(s.substr(i,d.size()) == d) {
				can2 = true;
				i += d.size();
			}
		}
		if(!can2) {
			can = false;
			break;
		}
	}
	if(can) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
