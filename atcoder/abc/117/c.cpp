#include <bits/stdc++.h>
using namespace std;
using pii=pair<int,int>;

#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define H_MAX 50
#define W_MAX 50

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int H,W;

namespace patch {
  template < typename T > std::string to_string( const T& n )
  {
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
  }
}

int main() {

  int n,m;
  cin >> n >> m;
  vector<int> x;
  int temp;
  rep(i,m){
    cin >> temp;
    x.push_back(temp);
  }
  if(n >= m){
    cout << 0 << endl;
    return 0;
  }
  sort(x.begin(),x.end());
  int length[m-1];
  int sum=0;
  int acclength[m-1];
  int accrlength[m-1];
  acclength[0]=0;
  rep(i,m-1) {
    length[i] = x[i+1] - x[i];
    sum += length[i];
    acclength[i+1] = sum;
  }
  int sum2=0;
  rep(i,m-1) {
    sum2 += length[m-2-i];
    accrlength[m-2-i] = sum2;
  }
  int count=n;
  int len_to_left,len_to_right;
  len_to_left = length[0];
  len_to_right= length[m-2];
  int num_to_left=0,num_to_right=m-1;
  vector<pii> y;
  rep(i,m-1) {
    y.push_back(pii(length[i],i));
  }
  sort(y.begin(),y.end());
  int count2 = m-2;
  int liter=0,riter=m-1;
  bool visited[m];
  rep(i,m) {
    visited[i]=false;
  }
  while(1) {
    if(count == 0)
      break;
    else if(count == 1) {
      if(len_to_left > len_to_right) {
	sum -= len_to_left;
      }
      else {
	sum -= len_to_right;
      }
      break;
    }
    else {
      sum -= y[count2].first;
      visited[y[count2].second] = true;
      visited[y[count2].second+1]=true;
      if(y[count2].second > num_to_left) {
	num_to_left = y[count2].second;
	while(visited[liter] == false) {
	  liter++;
	}
	len_to_left = acclength[y[count2].second] - acclength[liter];
	if(y[count2].second < num_to_right)
	  num_to_right = y[count2].second;
	if(y[count2].second+1==riter) {
	  riter--;
	}
	while(visited[riter]==false){
	  riter--;
	}
	len_to_right = accrlength[y[count2].second] - acclength[riter-1];
	count -= 2;
	count2--;
      }
    }
  }
  cout << sum << endl;
  return 0;
}

