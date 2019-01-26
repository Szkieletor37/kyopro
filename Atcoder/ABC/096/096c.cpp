#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A,B,C,X,Y;
	cin >> A >> B >> C >> X >> Y;

	int min_money = -1;

	for(int i=0; i<=max(X,Y); i++){
		if(min_money == -1)
			min_money = X*A + Y*B;
		else
			min_money = min(min_money, max((X-i),0)*A + max((Y-i),0)*B + 2*i*C);
	}
	cout << min_money << endl;
	return 0;
}
