#include<bits/stdc++.h>
using namespace std;
int longest_subarray(int arr[], int n, int k){
	map<long long, int> preSumMap;
	long long sum = 0;
	int maxLen = 0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum == k){
			maxLen = max(maxLen, i+1);
		}
		int rem = sum - k;
		if (preSumMap.find(rem) != preSumMap.end()){
			int len = i - preSumMap[rem];
			maxLen = max(maxLen, len);

		}
		if(preSumMap.find(sum) == preSumMap.end()){
			preSumMap[sum] = i;
		}
	}
	return maxLen;
}
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int k;
	cin >> k;
	int long_sub = longest_subarray(arr, n, k);
	cout << long_sub;
}