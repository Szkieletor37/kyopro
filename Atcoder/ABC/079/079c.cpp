#include <bits/stdc++.h>
using namespace std;

int main() {

  int a[4];
  int b;
  cin >> b;
  for(int i=3; i>-1; i--){ 
    a[i] = b%10;
    b /= 10;
  }

  int ans = a[0];
  for(int i=0; i<8; i++) {
    ans = a[0];
    for(int j=0; j<3; j++) {
    if(i & (1 << j)) 
      ans += a[j+1];
    else
      ans -= a[j+1];
    }
    if(ans == 7) {
      cout << a[0];
      for(int j=0; j<3; j++) {
	if(i & (1 << j))
	  cout << '+';
	else
	  cout << '-';
	cout << a[j+1];
      }
      cout << "=7" << endl;
      break;
    }
  }
  return 0;
}
    
   
      
