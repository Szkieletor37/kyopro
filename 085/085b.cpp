#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  map<int, int> mochi;

  cin >> N;
  int m;

  for(int i=0; i<N; i++) { 
    cin >> m;
    mochi[m]++;
    
  }

  cout << mochi.size() << endl;
  return 0;
}
  
