//moore's voting algorithm
#include<bits/stdc++.h>
using namespace std;
int majority_ele(int arr[], int n){
	int element = arr[0];
	int counter = 0;
	for(int i = 0; i < n;i++){
		if(counter == 0){
			counter = 1;
			element = arr[i];
		}
		else if(arr[i] == element){
			counter++;
		}
		else{
			counter--;
		}

	}
	int counter1 = 0;
	for(int i = 0; i < n;i++){
		if(arr[i] == element){
			counter1++;
		}
	}
	if(counter1 > n/2){
		return element;
	}
	return -1;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int majority_element = majority_ele(arr, n);
	cout << majority_element;
	return 0;
}