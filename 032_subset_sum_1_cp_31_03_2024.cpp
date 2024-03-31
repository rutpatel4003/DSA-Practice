#include<bits/stdc++.h>
using namespace std;
void subset_sum(vector<int> &arr, int sum, int index, vector<int> &subs_sum){
	if(index == arr.size()){
		subs_sum.push_back(sum);
		return;
	}
	subset_sum(arr, sum+arr[index], index+1, subs_sum);
	subset_sum(arr, sum, index+1, subs_sum);
}


int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0;i<n;i++){
		cin >> arr[i];
	}
	int index = 0;
	int sum = 0;
	vector<int> subs_sum;
	subset_sum(arr, sum, index, subs_sum);
	sort(subs_sum.begin(), subs_sum.end());
	for(auto number: subs_sum){
		cout << number << " ";
	}
	return 0;
}