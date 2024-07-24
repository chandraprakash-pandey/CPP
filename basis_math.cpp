#include<bits/stdc++.h>
using namespace std;

int main(){
	// Traversing in integer
	// int n;
	// cin>>n;

	// while(n != 0){
	// 	int num = n%10;
	// 	cout<<num<<" ";
	// 	n = n/10; // here its divided by 10 so log10(n) if it was divied by 2 then it will be log2(n)
	// } // its timecomplexity is O(log10(n))

	// // Other way to find number of digit
	// int num = (int)(log10(n)+1);
	// cout<<num;


	// Eulidean Algorithm

	// a = 15, b = 20;
	// gcd(a,b) = gcd(a-b,b) // greater - small
	// or
	// gcd(a,b) = gcd(a%b,b) // greaater %small
	// gcd will be 5

	int a,b;
	cin>>a>>b;
	while(a>0 && b>0){
		if(a>b) a = a%b;
		else b = b%a;
	}

	if(a == 0) cout<<b;
	else cout<<a;
}