//remove duplicates in-place from sorted array
#include<bits/stdc++.h>
using namespace std;
int rem_dup(int arr[], int n){
	int i = 0;
	for(int j = 1; j < n; j++){
		if(arr[j] != arr[i]){
			i++;
			arr[i] = arr[j];
		}
	}
	return i+1;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int sort_unique = rem_dup(arr, n);
	cout << sort_unique;
	return 0;
}