#include <bits/stdc++.h>
using namespace std;

int main() {

  int N,a;
  cin >> N;
  vector<int> a_vector;

  for(int i=0; i<N; i++) {
    cin >> a;
    a_vector.push_back(a);
  }

  int alice=0, bob=0;
  vector<int>::iterator iter;

  sort(a_vector.begin(), a_vector.end(), greater<int>());
  iter = a_vector.begin();

  while(iter != a_vector.end()) {
   alice += *iter;
   iter++;
   if(iter != a_vector.end()) {
     bob += *iter;
     iter++;
   }
  }

  cout << alice - bob << endl;
  return 0;
}
   

