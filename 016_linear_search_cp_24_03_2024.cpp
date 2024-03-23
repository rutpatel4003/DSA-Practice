//linear search to find a number
#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int num){
	for(int i=0;i<n;i++){
		if(arr[i] == num){
			return i;
		}
	}
	return -1;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int num;
	cin >> num;
	int lin_search = linear_search(arr, n, num);
	cout << lin_search;
	return 0;
}