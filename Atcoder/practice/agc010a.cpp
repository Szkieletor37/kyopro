#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  int arr[n];
  int count_odd = 0;
  int count_even = 0;

  for(int i=0; i<n; i++) {
    cin >> arr[i];
    arr[i] % 2 == 0 ? count_even++ : count_odd++;
  }

  if(count_odd % 2 == 0) 
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}

