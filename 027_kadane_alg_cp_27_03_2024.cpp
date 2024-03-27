//maximum subarray sum using kadane's algorithm
#include<bits/stdc++.h>
using namespace std;
tuple<int, int, int> maxSubArray(int arr[], int n) {
        int maxEle = INT_MIN;
        int sum = 0;
        int startI = -1, startE = -1;
        int start = 0;
        for(int i = 0; i < n; i++){
        	if(sum == 0){
        		start = i;
        	}
            sum += arr[i];
            if(sum >= maxEle){
            	maxEle = sum;
            	startI = start;
            	startE = i;
            }
            if (sum < 0){
               sum = 0;
            }
        }
    return {maxEle, startI, startE};
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	auto [maxEle, startI, startE] = maxSubArray(arr, n);
	for(int i = startI; i <= startE; i++){
		cout << arr[i] << " ";
	}
}