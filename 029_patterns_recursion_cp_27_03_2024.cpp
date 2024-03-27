#include<bits/stdc++.h>
using namespace std;
void subsequences_sum(vector<int> &nums, int n, int ind, int arr[], int k, int sum){
	if(ind == n){
		if(sum == k){
			for(auto it: nums){
			cout << it << " ";
			}
			cout << endl;
		}
		return;
	}
	nums.push_back(arr[ind]);
	sum += arr[ind];
	subsequences_sum(nums, n, ind+1, arr, k, sum);
	sum-=arr[ind];
	nums.pop_back();
	subsequences_sum(nums, n, ind+1, arr, k, sum);
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	vector<int> ds;
	int sum=0;
	int k = 3;
	subsequences_sum(ds, n, 0, arr, k, sum);
	return 0;
}