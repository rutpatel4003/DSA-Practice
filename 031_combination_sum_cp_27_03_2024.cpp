#include<bits/stdc++.h>
using namespace std;
void combination_sum(vector<int> &arr, vector<int> &ds, int k, int i, vector<vector<int>> &ans){
	if(k == 0){
		ans.push_back(ds);
		return;
	}
	for(int ind = i; ind<arr.size(); ind++){
		if(ind>i && arr[ind]==arr[ind-1]){
			continue;
		}
		if(arr[ind]>k){
			break;
		}
		ds.push_back(arr[ind]);
		combination_sum(arr, ds, k - arr[ind], ind+1, ans);
		ds.pop_back();
	}	
}
int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int k;
	cin >> k;
	vector<vector<int>> ans;
	vector<int> ds;
	combination_sum(arr, ds, k, 0, ans);
	for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) 
            cout << ans[i][j] << " "; 
        cout << endl; 
    } 
	return 0;
}