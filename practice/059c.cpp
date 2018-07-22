#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  vector<long long> vector;  
  long long temp;

  for(int i=0; i<n; i++) {
    cin >> temp;
    vector.push_back(temp);
  }

  long long answer1=0;
  long long answer2=0;
  long long sum1=0;
  long long sum2=0;

  for(int i=0; i<n; i++) {
    if(i == 0) {
      if(vector[0] > 0)
	sum1 = vector[0]; //初項
      else {
	sum1 = vector[0];
	while(sum1 <= 0) {
	  sum1++;
	  answer1++;
	}
      }
    }
    else if(sum1 < 0) {
      sum1 += vector[i];
      if(sum1 <= 0){ //和の符号がデフォルトで異なるとき
	// answer -> そのまま
	while(sum1 <=0) {
	  sum1++;
	  answer1++;
	}
      }
    }
    else {
      sum1 += vector[i];
      if(sum1 >= 0){ //和の符号がデフォルトで異なるとき
	// answer -> そのまま
	while(sum1 >=0) {
	  sum1--;
	  answer1++;
	}
      }
    }
  }

  for(int i=0; i<n; i++) {
    if(i == 0) {
      if(vector[0] < 0)
	sum2 = vector[0]; //初項
      else {
	sum2 = vector[0];
	while(sum2 >= 0) {
	  sum2--;
	  answer2++;
	}
	/*sum1 = 1;
	  answer1 += abs(1-vector[0]);
	  */
      }
    }
    else if(sum2 < 0) {
      sum2 += vector[i];
      if(sum2 <= 0){ //和の符号がデフォルトで異なるとき
	// answer -> そのまま
	while(sum2 <=0) {
	  sum2++;
	  answer2++;
	}
      }
    }
    else {
      sum2 += vector[i];
      if(sum2 >= 0){ //和の符号がデフォルトで異なるとき
	// answer -> そのまま
	while(sum2 >=0) {
	  sum2--;
	  answer2++;
	}
      }
    }
  }
  cout << min(answer1,answer2) << endl;
  return 0;
}
