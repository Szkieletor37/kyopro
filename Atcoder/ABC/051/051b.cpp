#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int K,s;
  cin >> K >> s;

  int count=0;

  for(int i=0; i<K+1; i++) {
    for(int j=0; j<K+1; j++) {
	if(s-(i+j) <= K && s>=i+j) 
	  count++;
    }
  }

  cout << count << endl;
  return 0;
}
