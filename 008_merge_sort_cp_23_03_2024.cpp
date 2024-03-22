#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int mid, int high){
	vector<int> temp;
	int left = low;
	int right = mid+1;
	while(left <= mid && right<=high){
		if(arr[left] <= arr[right]){
			temp.push_back(arr[left]);
			left++;
		}
		else{
			temp.push_back(arr[right]);
			right++;
		}
		
	}
	while(left <= mid){
		temp.push_back(arr[left]);
		left++;
	}
	while(right <= high){
		temp.push_back(arr[right]);
		right++;
	}

	for(int i = low; i <= high; i++){
		arr[i] = temp[i - low]; 
	}

}
void mergeSort(int arr[], int low, int high, int n){
	if (low >= high){
		return;
	}
	int mid_ind = (low+high)/2;
	mergeSort(arr, low, mid_ind, n);
	mergeSort(arr, mid_ind+1, high, n);
	merge(arr, low, mid_ind, high);
	
}


int main(){
	int n;
	cin >> n;
	int high = n;
	int low = 0;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	mergeSort(arr, low, high-1, n);\
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}