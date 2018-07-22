#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Y;
  cin >> N >> Y;

  int answerk=-1, answerfk=-1, answertk=-1;

  int a = Y/1000;

  if (a == N) {
    answerk = N;
    answerfk = 0;
    answertk = 0;
  }

  int b = a - N;

  for(int j=b/4; j>=0; j--) {
    if((b-4*j) % 9 == 0 && (b-4*j)/9 >= 0 && (b-4*j)/9 <= N-j) {
      answerfk = j;
      answertk = (b-4*j) / 9;
      answerk = N-j-answertk;
    }
  }
  cout << answertk << " " << answerfk << " " << answerk << endl;
  return 0;
}
  

