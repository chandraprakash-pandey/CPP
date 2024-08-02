#include<bits/stdc++.h>
using namespace std;

int main(){
	// int n;
	// cin>>n;
	// int arr[n];
	// // size of array in int main can be pow(10,6) in outside int main size will be pow(10,7)

	// for(int i = 0; i<n; i++){
	// 	cin>>arr[i];
	// }

	// // pre compute
	// int hash1[13] = {0};
	// for(int i = 0; i<n; i++){
	// 	hash1[arr[i]] += 1;
	// }

	// int test_q;
	// cin>>test_q;
	// while(test_q--){
	// 	int num;
	// 	cin>>num;
	// 	// hash
	// 	cout<<hash1[num]<<endl;
	// }

	// hashing of lowercase alphabet
	// string s;
	// cin>>s; // if higher alphabet is there then // if there are all character

	// //pre compute
	// int hash[26] = {0}; // // put size 256
	// for(int i = 0 ; i< s.size(); i++){
	// 	hash[s[i]-'a'] +=1; // put here s[i]-'A' // put only s[i]
	// }

	// int test_q;
	// cin>>test_q;
	// while(test_q--){
	// 	char c;
	// 	cin>>c;
	// 	cout<<hash[c-'a']<<endl; // // do output hash[c]
	// }

	int n;
	cin>>n; // in char
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	//pre-compute // time comlpexity of map is O(log N) // time complexity of unordered_map is O(1)
	unordered_map<int,int> mpp; //by default value of map is 0; map is in order form; // in char do map<char, int>
	for(int i = 0; i<n; i++){
		mpp[arr[i]] += 1;
	}

	// Iterate in map
	for(auto it:mpp){
		cout<<it.first<<"->"<<it.second<<endl;
	}

	int test_q;
	cin>>test_q;

	for(int i = 0; i<test_q; i++){
		int num;
		cin>>num;
		//fetch	
		cout<<mpp[arr[num]]<<endl;
	}

}