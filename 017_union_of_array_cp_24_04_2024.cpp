#include<bits/stdc++.h>
using namespace std;
vector<int> sorted_arr(vector<int> a, vector<int> b){
	int n1 = a.size();
	int n2 = b.size();
	int i = 0;
	int j = 0; 
	vector<int> unionArr;
	while(i < n1 && j < n2){
		if (a[i] <= b[j]){
			if(unionArr.size() == 0 || unionArr.back() != a[i]){
				unionArr.push_back(a[i]);
			}
			i++;
		}
		else {
			if(unionArr.size() == 0 || unionArr.back() != b[j]){
				unionArr.push_back(b[j]);
			}
			j++;
		}
		
	}
	while(j < n2){
		if(unionArr.size() == 0 || unionArr.back() != b[j]){
			unionArr.push_back(b[j]);
		}
		j++;
	}
	while(i < n1){
		if(unionArr.size() == 0 || unionArr.back() != a[i]){
			unionArr.push_back(a[i]);
		}
		i++;
	}

	return unionArr;
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
	vector<int> un_ar = sorted_arr(arr1, arr2);
	for(int i=0;i<un_ar.size();i++){
		cout << un_ar[i] << " ";
	}

	return 0;
}