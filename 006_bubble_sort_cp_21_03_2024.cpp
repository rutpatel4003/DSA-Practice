#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
	for(int i = n-1; i >= 0; i--){
		for(int j = 0; j <= i-1; j++){
			int temp;
			if (arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
int main(){

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	bubble_sort(arr, n);
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}