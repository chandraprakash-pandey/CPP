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

void LeftRotation(int d, int n, int arr[]){
	// Brute force approach is to make new array and add all the starting d value 
	// then shift d k aage wale elemts ko starting then add those new array at last

	reverse(arr, arr+d);
	reverse(arr+d, arr+n);
	reverse(arr, arr+n);

	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void RightRotation(int d, int n, int arr[]){
	d = n-d;
	reverse(arr,arr+d);
	reverse(arr, arr+n);

	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

void zero_at_end(int n, int arr[]){
	// Brute force soln is to make new array and store non zero elemnts then add that new array in original array at start and put remaing last element 0.
	int j = -1;
	for(int i = 0; i<n; i++){
		if(arr[i] == 0){
			j = i;
			break;
		}
	}

	for(int i = j+1; i<n; i++){
		if(arr[i] != 0){
			swap(arr[i],arr[j]);
			j++;
		}
	}

	for(int i = 0; i< n; i++){
		cout<<arr[i] << " ";
	}
}

void linear_search(int search,int n, int arr[]){
	for(int i = 0; i<n; i++){
		if(arr[i] == search){
			cout<<i<<endl;
		}
	}
	cout<<"-1"<<endl;
}

vector<int> Union_of_two_array(int n, int m, vector<int> arr1, vector<int> arr2){
	// Brute force way is to make a set<int> add all the value of array a and b in it. Then add that set in new array.
	int n1 = a.size();
	int n2 = b.size();
	int i = 0;
	int j = 0;
	vector<int> unionArr;

	while(i<n1 && j<n2){
		if(arr[i]<=arr[j]){
			if(unionArr.back() != arr[i] || unionArr.size() == 0){
				unionArr.push_back(arr[i]);
			}
			i++;
		}
		else{
			if(unionArr.back() != arr[j] || unionArr.size() == 0){
				unionArr.push_back(arr[j]);
			}
			j++;
		}

		while(i<n1){
			if(unionArr.back() != arr[i]){
				unionArr.push_back(arr[i]);
			}
			i++;
		}
		while(j<n2){
			if(unionArr.back() != arr[j]){
				unionArr.push_back(arr[j]);
			}
			j++;
		}
	}
	return unionArr;
}

vector<int> Intersection_of_two_Array(vector<int> a, vector<int> b){
	int n1 = a.size();
	int n2 = b.size();

	int i = 0;
	int j = 0;
	vector<int> ans;

	while(i<n1 && j<n2){
		if(a[i] < b[j]){
			i++;
		}
		else if(a[i] > b[j]){
			j++;
		}
		else{
			ans.puch_back(a[i]);
			i++;
			j++;
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	// largestelement(n, arr);
	// Secondlargest(n,arr);
	// check_sorting(n, arr);

	// LeftRotation(2,n,arr);
	// RightRotation(2,n,arr);
	// zero_at_end(n,arr);
	// linear_search(2,n, arr);
	// Union_of_two_array(Parameter)


	return 0;
}