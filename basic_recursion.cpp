#include<bits/stdc++.h>
using namespace std;

//Print name 4 times
void printname1(int i,int n){
	if(i > n) return; // Base Condition
	cout<<"Pandey"<<endl;
	i++;
	printname1(i,n);
}

//Print num
void printnum(int i,int n){
	if(i>n) return;
	cout<<i<<endl;
	i++;
	printnum(i,n);
}

//Print num reverse
// void printnum1(int i,int n){
// 	if(n<i) return;
// 	cout<<n<<endl;
// 	n--;
// 	printnum(i,n);
// }

// or

void printnum1(int i,int n){
	if(i<1) return;
	cout<<i<<endl;
	i--;
	printnum1(i,n);
}

// Print from 1 to n in backtrack
// void printnum2(int i,int n){
// 	if(i<1) return;
// 	printnum2(i-1,n);
// 	cout<<i<<endl;
// }

// Print n to 1 in backtrack
void printnum2(int i, int n){
	if(i>n) return;
	printnum2(i+1,n);
	cout<<i<<endl;
}

// Sum of n number
int sum1(int n){
	if(n == 0) return 0;
	return n+sum1(n-1);
}

// Factorial
int fact(int n){
	if(n == 1) return 1;
	return n*fact(n-1);
}

// reverse Array
void reverse_array(int i,int n, int arr[]){
	if(i >= n/2) return;
	swap(arr[i],arr[n-i-1]);
	reverse_array(i+1,n,arr);
}

bool checkpalindrom(int i, string &s){
	if(i>=s.size()/2) return true;
	if(s[i] != s[s.size()-i-1]) return false;
	checkpalindrom(i+1,s);
}
int main(){
	// int n;
	// cin>>n;
	// printname1(1,n);
	// printnum(1,n);
	// printnum1(n,n);
	// printnum2(1,n);
	// cout<<sum1(n);
	// cout<<fact(n);

	// int arr[5];
	// for(int i = 0; i<5; i++){
	// 	cin>>arr[i];
	// }

	// reverse_array(0,5,arr);

	// for (int i = 0; i < 5; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// return 0;

	string s = "imiaimia";
	cout<<checkpalindrom(0,s);

}