#include<bits/stdc++.h>
using namespace std;
int num_once(int arr[], int n){
	int xor1 = 0;
	for(int i=0;i<n;i++){
		xor1 ^= arr[i];
	}

	return xor1;
}
int main(){	
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int num = num_once(arr, n);
	cout << num;
	return 0;
}