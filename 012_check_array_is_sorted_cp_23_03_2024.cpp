#include<bits/stdc++.h>
using namespace std;
bool check_array_sorted(int arr[], int n){
	for(int i = 1; i < n; i++){
		if (arr[i] >= arr[i-1]){
		}
		else{
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int sorted_or_not = check_array_sorted(arr, n);
	cout << sorted_or_not;
	return 0;
}