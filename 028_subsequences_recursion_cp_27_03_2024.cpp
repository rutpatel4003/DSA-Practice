#include<bits/stdc++.h>
using namespace std;
void subsequences(vector<int> &nums, int n, int ind, int arr[]){
	if(ind == n){
		for(auto it: nums){
			cout << it << " ";
		}
		if(nums.size() == 0){
			cout << "{}";
		}
		cout << endl;
		return;
	}
	nums.push_back(arr[ind]);
	subsequences(nums, n, ind+1, arr);
	nums.pop_back();
	subsequences(nums, n, ind+1, arr);
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	vector<int> ds;
	subsequences(ds, n, 0, arr);
	return 0;
}