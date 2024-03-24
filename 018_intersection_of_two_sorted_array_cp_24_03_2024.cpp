//intersection of two sorted arrays
#include<bits/stdc++.h>
using namespace std;
vector<int> sorted_arr(vector<int> a, vector<int> b){
	int n1 = a.size();
	int n2 = b.size();
	int i = 0;
	int j = 0; 
	vector<int> intersectionArr;
	while(i < n1 && j < n2){
		if(a[i] < b[j]){
			i++;
		}
		else if(b[j] < a[i]){
			j++;
		}
		else{
			intersectionArr.push_back(a[i]);
			i++;
			j++;
		}
	}
	return intersectionArr;
}
int main(){
	int n1;
	cin >> n1;
	vector<int> arr1;
	for(int i=0;i<n1;i++){
		int num;
		cin >> num;
		arr1.push_back(num);
	}
	int n2;
	cin >> n2;
	vector<int> arr2;
	for(int i=0;i<n2;i++){
		int num;
		cin >> num;
		arr2.push_back(num);
	}
	vector<int> in_ar = sorted_arr(arr1, arr2);
	for(int i=0;i<in_ar.size();i++){
		cout << in_ar[i] << " ";
	}


	return 0;
}