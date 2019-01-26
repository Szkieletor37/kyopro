#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int a;
  map<int,int> mp;
  for(int i=0; i<N; i++) {
    cin >> a;
    mp[a]++;
  }

  int count = 0;

  for(int i=1; i <=1000000000; i++) {
    if(mp[a] % 2 == 1) 
      count++;
  }

  cout << count << endl;
  return 0;
}

