#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,a,b;
  cin >> n >> a >> b;
 
  int A = a-1;
  int B = n-b;


  int limit_a, limit_b;

/*  if((b-a)%2 == 0) {
    limit_a = A+(b-a-1)/2+1;
    limit_b = B+(b-a-1)/2;
  }
  else {
    limit_a = A+(b-a-1)/2;
    limit_b = B+(b-a-1)/2;
  }
  if(limit_a > limit_b) 
    cout << "Alice" << endl;
  else if(limit_a > limit_b) 
    cout << "Borys" << endl;
  else {
    if(limit_a == 0) 
      cout << "Borys" << endl;
    else 
      cout << "Draw" << endl;
  }*/
  if((b-a)%2 == 0) {
    cout << "Alice" << endl;
  }
  else {
    cout << "Borys" << endl;
  }

  return 0;
}
