//find the missing number from the array
//for range 0 to n
#include<bits/stdc++.h>
using namespace std;
int missing_number(int arr[], int n){
	int sum = n*(n+1)/2;
	int sum_arr = 0;
	for(int i=0;i<n;i++){
		sum_arr += arr[i];
	}
	return (sum - sum_arr);
}

//for range 1 to n
int missing_number_2(int arr[], int N){
	int xor1 = 0, xor2=0;
	int n = N-1;
	for(int i=0;i<n;i++){
		xor2 = xor2^(arr[i]);
		xor1 = xor1^(i+1);
	}
	xor1 = xor1^N;
	return xor1 ^ xor2;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int mis_num = missing_number(arr, n);
	int mis_num_2 = missing_number_2(arr, n);
	cout << mis_num << " " << mis_num_2;
}