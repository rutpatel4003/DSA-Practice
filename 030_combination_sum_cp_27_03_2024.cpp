#include<bits/stdc++.h>
using namespace std;
void combination_sum(int arr[], int n, vector<int> &ds, int k, int sum, int i, vector<vector<int>> &ans){
	if(i==n){
		if(k == 0){
			ans.push_back(ds);
		}
		return;
	}
	if(arr[i] <= k){
		ds.push_back(arr[i]);
		combination_sum(arr, n, ds, k - arr[i], sum, i, ans);
		ds.pop_back();
	}
	combination_sum(arr, n, ds, k, sum, i+1, ans);
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin >> arr[i];
	}
	int k;
	cin >> k;
	vector<vector<int>> ans;
	vector<int> ds;
	combination_sum(arr, n, ds, k, 0, 0, ans);
	for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) 
            cout << ans[i][j] << " "; 
        cout << endl; 
    } 
	return 0;
}