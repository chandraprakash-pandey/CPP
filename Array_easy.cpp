#include<bits/stdc++.h>
using namespace std;

// Inside Int main()
// - garbage value by default
// - Array length 10^6

// Globally
// - default valuee will be 0
// - Array length 10^7

// SOlve first in Brute then better then optimal

void largestelement(int n, int arr[]){
	// Brute approach is that Sort the array and print arr[n-1]
	// Below code is optimal approach
	int large = arr[0];
	for(int i =0; i<n; i++){
		if(arr[i]>large) large = arr[i];
	}
	cout<<large<<endl;
}

void Secondlargest(int n, int arr[]){
	int large = arr[0];
	int slarge = -1;

	for(int i = 1; i<n; i++){
		if(arr[i]>large) {
			slarge = large;
			large = arr[i];
		}
		else if(arr[i]<large && arr[i] > slarge) slarge = arr[i];

	}

	cout<<slarge<<endl;
}

void check_sorting(int n, int arr[]){
	for(int i = 1; i<n; i++){
		if(arr[i-1]>arr[i]){
			cout<<"Not Sorted"<<endl;
		}
	}
	cout<<"sorted"<<endl;
}

void remove_repeated_from_sorted(int n, int arr[]){
	int i = 0;
	for(int j = 0; j<n; j++){
		if (arr[i] != arr[j]){
			arr[i+1] = arr[j];
			i += 1;
		}
	}

	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	largestelement(n, arr);
	Secondlargest(n,arr);
	check_sorting(n, arr);

	return 0;
}