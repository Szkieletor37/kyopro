#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

long long GetDigit(ll num) {
	return floor(log10(num)+1);
}

int main() 
{
	ll N;
	cin >> N;
	ll minimum;

	for(ll i=1; i<=floor(sqrt(N)); i++) {
		if(i==1) {
			minimum = GetDigit(N);
		}
		else {
			if(N%i == 0)
				minimum= min(minimum, max(GetDigit(i) , GetDigit(N/i)));
		}
	}
	cout << minimum << endl;
	return 0;
}
