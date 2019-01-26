#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N,A,B;
  cin >> N >> A >> B;
  int acc = 0;

  for(int i=0; i<N+1; i++) {
    int ss = i/10000 + (i%10000)/1000 + (i%1000)/100 + (i%100)/10 + i%10;
    if (ss >= A && ss <= B) {
      acc += i;
    }
  }
  cout << acc << endl;
  return 0;
}
