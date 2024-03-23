//largest element in the array
#include<bits/stdc++.h>
using namespace std;
int sort_arr(int arr[], int n){
	int max = arr[0];
	for(int i = 1; i < n; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}

	return max;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i ++){
		cin >> arr[i];
	}
	int max_element = sort_arr(arr, n);
	cout << max_element;
	return 0;
}