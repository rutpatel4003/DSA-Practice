#include<bits/stdc++.h>
using namespace std;
void f(int i, int n){
	if (i > n){
		return;
	}
	cout << "rut" << endl;
	f(i+1, n);
}

void print_linearly(int i, int n){
	if (i < n){
		return;
	}	
	cout << i << endl;
	print_linearly(i-1, n);
}

void print_reverse(int i){
	if (i < 1){
		return ;
	}

	cout << i << endl;
	print_reverse(i-1);
}

void back_track_1_to_n(int i){
	if (i < 1){
		return;
	}

	back_track_1_to_n(i-1);
	cout << i << endl;
}

void back_track_n_to_1(int i, int n){
	if (i > n){
		return;
	}
	back_track_n_to_1(i+1, n);
	cout << i << endl;
}

void summation_first_n(int i, int n, int sum){
	if (i > n){
		cout << sum;
		return;
	}
	summation_first_n(i+1, n, sum+i);
}

int factorial(int n){
	if (n == 1){
		return 1;
	}
	return n*factorial(n-1);
}

void reverse_array(int l, int r, int arr[], int arr_size){
	if (l >= r){
		for (int j = 0; j <= arr_size; j++){
			cout << arr[0] << endl;
			cout << arr[j] << endl;
		}
		return ;
	}
	int temp;
	temp = arr[l];
	arr[l] = arr[r];
	arr[r] = temp;
	reverse_array(l+1, r-1, arr, arr_size);
}

int fibonacci(int n){
	if (n <= 1){
		return n;
	}

	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int n;
	cin >> n;
	//int fact = factorial(n);
	int arr[] = {1, 3, 4, 6, 8};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	//cout << fact;
	//reverse_array(0, arr_size, arr, arr_size);
	int fib = fibonacci(n);
	cout << fib << endl;
	return 0;
}