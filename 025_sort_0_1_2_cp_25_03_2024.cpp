//using dutch flag algorithm
#include<bits/stdc++.h>
using namespace std;
void sort_zeros_ones_twos(int arr[], int n){
	int low = 0, mid = 0;
	int high = n-1;
	while(mid <= high){
		if(arr[mid] == 0){
			swap(arr[low], arr[mid]);
			low++;
			mid++;
		}
		else if (arr[mid] == 1){
			mid++;
		}
		else{
			swap(arr[mid], arr[high]);
			high--;
		}
	}
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort_zeros_ones_twos(arr, n);
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}