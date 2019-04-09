#include <iostream>
#include <string>
#include <vector>
#include <ios>
#include <iomanip>
#include <stack>
#include <queue>
#include <algorithm>
 
#define REP(i, n) for(int i = 0;i < n;i++)
 
using namespace std;
 
const int INF = 100000000;
 
int main(){
  int W,K,n;
  cin >> W;
  cin >> n >> K;
 
  vector<int> a = vector<int>(n);
  vector<int> b = vector<int>(n);
 
  REP(i,n){
    cin >> a[i] >> b[i];
  }
 
  vector< vector< vector<int> > > dp;
  dp = vector< vector< vector<int> > >(n+1,vector< vector<int> >(W+1,vector<int>(K+1,0)));
 
  REP(i,n){
    REP(w,W+1){
      REP(k,K+1){
        if (w - a[i]>= 0 && k - 1 >= 0) {
          dp[i+1][w][k] = max(dp[i][w - a[i]][k - 1] + b[i], dp[i][w][k]);
        }else{
          dp[i+1][w][k] = dp[i][w][k];
        }
      }
    }
  }
 
  cout << dp[n][W][K] << endl;
  return 0;
}
