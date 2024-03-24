#include<bits/stdc++.h>
using namespace std;
int largest_subarr(int arr[], int n, int k){
	int right = 0;
	int left = 0;
	long long sum = arr[0];
	int maxLen = 0;
	while(right < n){
		while(left <= right && sum > k){
			sum -= arr[left];
			left++;
		}
		if (sum == k){
			maxLen = max(right - left +1, maxLen);
		}
		right++;
		if (right < n){
			sum += arr[right];
		}
	}
	return maxLen;
}

int main(){	
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int k;
	cin >> k;
	int num = largest_subarr(arr, n, k);
	cout << num;
	return 0;
}