//second largest and smallest element in the array
#include<bits/stdc++.h>
using namespace std;
int second_largest(int arr[], int n){
	int largest = arr[0];
	int second_lar = -1;
	for(int i = 0; i < n; i++){
		if (arr[i] > largest){
			second_lar = largest;
			largest = arr[i];
		}
		else if(arr[i] < largest && arr[i] > second_lar){
			second_lar = arr[i];
		}
	}
	return second_lar;
}

int second_smallest(int arr[], int n){
	int smallest = arr[0];
	int second_smal = -1;
	for(int i = 0; i < n; i++){
		if (arr[i] < smallest){
			second_smal = smallest;
			smallest = arr[i];
		}
		else if(arr[i] > smallest && arr[i] < second_smal){
			second_smal = arr[i];
		}
	}
	return second_smal;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i ++){
		cin >> arr[i];
	}
	int second_lar = second_largest(arr, n);
	cout << second_lar << endl;

	int second_smal = second_smallest(arr, n);
	cout << second_smal << endl;
	return 0;
}