#include<bits/stdc++.h>
using namespace std;
string two_sum(int arr[], int n, int sum){
	int left=0, right=n-1;
	sort(arr, arr+n);
	while(left < right){
		int s = arr[left] + arr[right];
		if(s == sum){
			return "YES";
		}
		else if(s > sum){
			right--;
		}
		else{
			left++;
		}
	}
	return "NO";
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >>arr[i];
	}
	int s;
	cin >> s;
	string sum = two_sum(arr, n, s);
	cout << sum;

	return 0 ;
}