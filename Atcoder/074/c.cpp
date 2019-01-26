#include <bits/stdc++.h>
using namespace std;

int main() {

  int i,j;

  int A, B, C, D, E, F;
  vector<int> water,sugar;

  cin >> A >> B >> C >> D >> E >> F;

  for(i = 0; i <= F/(100*A); i++) {
    for(j=0; j<=(F-(100*A*i))/(100*B); j++) {
      if(i!=0 || j!=0)
	water.push_back(100*A*i+100*B*j);
    }
  }

  for(i=0; i<=F/C; i++) {
    for(j=0; j<=F/D; j++) {
      sugar.push_back(C*i+D*j);
    }
  }
  //vector<int>::iterator citer = find(sugar.begin(), sugar.end(), 934);
  //vector<int>::iterator diter = find(sugar.begin(), sugar.end(), 932);

  long double max_den = -1;
  int max_sugar = 0;
  int max_water = 0;

  for(vector<int>::iterator iter_w = water.begin(); iter_w != water.end(); iter_w++) {
    for(vector<int>::iterator iter_s = sugar.begin(); iter_s != sugar.end(); iter_s++) {
      if(*iter_w + *iter_s <= F && *iter_w*E >= *iter_s*100) {
	if(max_den*(*iter_w+*iter_s)< (100.0*(*iter_s))) {
	  max_den = (100.0*(*iter_s))/(*iter_w+*iter_s);
	  max_sugar = *iter_s;
	  max_water = *iter_w;
	}
      }
    }
  }

  cout << (max_water+max_sugar) << " " << max_sugar << endl;

  return 0;
}

