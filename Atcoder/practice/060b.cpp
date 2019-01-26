#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,C;
  cin >> A >> B >> C;

  vector<int> vec;

  int count = 1;
  while(1) {
    if(find(vec.begin(),vec.end(),A*count % B) == vec.end()) {
      vec.push_back(A*count % B);
    }
    else 
      break;
    count++;
  }

  sort(vec.begin(), vec.end());

  if(find(vec.begin(), vec.end(), C) != vec.end())
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
