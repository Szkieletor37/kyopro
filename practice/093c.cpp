#include <bits/stdc++.h>
using namespace std;

int max3(int i, int j, int k) {
  int max = i;
  if(max < j) max = j;
  if(max < k) max = k;
  return max;
}
int main() {

  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  /*int maxi,mini;
  maxi = max;
  mini = min(a,b,c);

  int least_times = (maxi - mini) % 2 == 0 ? (maxi - mini) / 2 : (maxi - mini) / 2 + 1;
  */
  int max = max3(a[0], a[1], a[2]);

  int sum = a[0] + a[1] + a[2];
  int least_times = (max*3 - sum) % 2 == 0 ? (max*3 - sum) / 2 : (max*3 - sum) / 2 + 1;

  int answer = 0;
  
  if(sum % 3 == 0) {
    answer = 0;
  }
  else if(sum % 3 == 1) {
    answer = 1;
  }
  else {
    answer = 2;
  }
  while(answer < least_times) {
    answer += 3;
  }

  cout << answer << endl;
  return 0;
}
