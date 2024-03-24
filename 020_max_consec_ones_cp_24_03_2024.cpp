#include<bits/stdc++.h>
using namespace std;
int max_ones(int arr[], int n){
	int counter = 0, max_in = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == 1){
			counter++;
			max_in = max(max_in, counter);
		}
		else{
			counter = 0;
		}
	}
	return max_in;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int max_one = max_ones(arr, n);
	cout << max_one;
	return 0;
}