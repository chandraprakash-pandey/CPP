#include<bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[],int n){
	for(int i = 0; 	i<=n-2; i++){
		int min_i = i;
			for(int j = i; j<=n-1; j++){
				if(arr[min_i]>arr[j]) min_i = j;
			}
		swap(arr[i],arr[min_i]);
	}

	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

// Best case id of O(N) and worst O(N*N)
void Bubble_Sort(int arr[], int n){
	for(int i = n-1; i>=1; i--){
            int temp = 0;
            for(int j = 0; j<i; j++){
                if(arr[j]>arr[j+1]) {
                    swap(arr[j], arr[j+1]);
                    temp = 1;
                }
            }
            if(temp == 0){
                break;
            }
        }
}

// Best case is of O(N)
void Insertion_Sort(int arr[], int n){
	for(int i = 0; i<= n-1; i++){
		int j = i;
		while(j>0 && arr[j-1]>arr[j]){
			swap(arr[j-1],arr[j]);
			j--;
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

	Selection_Sort(arr, n);
	Bubble_Sort(arr, n); // Worst case and avg case(O(N^2)) and best case O(N);

	// Bubble Sort
}