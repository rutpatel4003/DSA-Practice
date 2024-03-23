//rotate array by k places
#include<bits/stdc++.h>
using namespace std;
void rotate_left_by_k(int arr[], int n, int k){
	k = k % n;
	int temp[k];
	for(int i = 0; i < k; i++){
		temp[i] = arr[i];
	}

	for(int i = k; i < n; i++){
		arr[i-k] = arr[i];
	}
	for(int i = (n-k); i < n; i++){
		arr[i] = temp[i - (n-k)];
	}
}

void rotate_left_by_1(int arr[], int n){
	int temp = arr[0];
	for(int i = 1; i < n; i++){
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int rotate_by;
	cin >> rotate_by;
	rotate_left_by_k(arr, n, rotate_by);
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}