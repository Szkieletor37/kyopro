#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	int array[n];

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> array[i];
	}

	int answer=0;
	int sum=0;
	for(int i=0; i<n; i++) {
		if(sum == 0) 
			sum += array[0];
		else if(sum < 0) {
			/* arr[1] = もし-1*arr[0]+1 > array[i] なら までインクリメント
			 * でなければ 
			 *
			 * arr[2] = arr[0]-1 までデクリメント
			 * 以下同様
			 * t番目を考える（t-1番目まで条件を満たしているとする）
			 * t番目の符号はarr[0]の符号で決まる
			 * t番目の絶対値 -> 条件を満たすならそのまま
			 * 満たさない場合-> if(sum == 1) -2; (sum==-1) 2; sum < 0) -sum+1; sum>0 -sum-1;
			 * -1 4 -4 2 -5 3
			 * -3 4 -2 2 -2 2*/
			if(sum + array[i] > 0){
				// answer -> answer
				sum += array[i];
			}
			else {
				if(sum == -1) {
					answer += abs(2-array[i]);
					sum += 2;
				}
				else {
					answer += abs((-1)*sum+1 - array[i]);
					sum = 1;
				}
			}
		}
		else {
			if(sum + array[i] < 0) {
				//answer->answer
				sum += array[i];
			}
			else {
				if(sum == 1) {
					answer += abs(-2-array[i]);
					sum += -2;
				}
				else {
					answer += abs((-1)*sum-1 - array[i]);
					sum = -1;
				}
			}
		}
	}
	cout << answer << endl;
}
